#include <iostream>
#include<algorithm>
using namespace std;

struct Process{
  int id, burst, remaining;  
};

void roundRobin(Process p[], int n, int qunatm = 3){
    int reamin = n, tim = 0;
    
    for(int i=0; i<n; i++) p[i].remaining = p[i].burst;
    
    cout << "\nProcess Results:\n";
    cout << "ID\tWait\tTurnaround\n";
    
    int totalWait = 0, totalTurn = 0;
    
    while(reamin){
        for(int i=0; i<n; i++){
            if(p[i].remaining <= 0) continue;
            
            int exec = min(qunatm, p[i].remaining);
            p[i].remaining -= exec;
            tim += exec;
            
            if(p[i].remaining <= 0){
                reamin--;
                int wait = tim - p[i].burst;
                totalWait += wait;
                totalTurn += tim;
                cout << p[i].id << "\t" << wait << "\t" << tim << "\n";
            }
        }
    }
    
    cout << "Avg Wait: " << (float)totalWait/n;
    cout << "\nAvg Turnaround: " << (float)totalTurn/n << "\n";
}

int main()
{
    int n;
    cout<<"input number of process: ";
    cin>>n;
    
    Process p[n];
    for(int i=0; i<n; i++){
        p[i].id = i + 1;
        cout<<"input burst"<<i+1;
        cin>>p[i].burst;
    }
    roundRobin(p,n);
    return 0;
}
