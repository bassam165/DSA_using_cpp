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
        for (int j = 0; j < 3; j++) { 
            if(i==j){
                sum += arr[i][j];
            }
            else if(j == 3-i-1){
                sum += arr[i][j];
            }
        } 
    }
    cout<<sum;
    return 0; 
}
