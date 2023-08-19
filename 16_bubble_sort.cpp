#include<iostream>
using namespace std;
void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int k=0; k<n; k++){
        cout<<arr[k];
    }
}
int main()
{
    int arr[5]={10,5,8,3,7};
    sort(arr,5);
}