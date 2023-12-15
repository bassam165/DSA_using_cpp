#include<iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
        if(swapped==false){
        break;
    }
    }  
    
}
int main()
{
    int arr[5]={10,5,8,3,7};
    sort(arr,5);
    for(int k=0; k<5; k++){
        cout<<arr[k];
    }
}
