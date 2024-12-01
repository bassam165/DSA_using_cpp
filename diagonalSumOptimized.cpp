#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[3][3]; 
    int sum = 0;
    
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cin>>arr[i][j];
        } 
    } 
    
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) { 
            cout << arr[i][j]<< " "; 
        } 
        cout << endl; 
    } cout<<endl;
    
    for (int i = 0; i < 3; i++) {
        sum += arr[i][i];
        if(i != 3-i-1){
            sum += arr[i][i];
        }
    }
    cout<<sum;
    return 0; 
}
