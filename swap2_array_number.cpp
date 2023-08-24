#include<iostream>
using namespace std;

void swapTwo(int arr[],int n){
    for(int i=0; i<=n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);//swap this
        }
    }
    for(int j=0; j<n; j++){
        cout<<arr[j];
    }
}

int main()
{
    int arr[4]={2,5,6,8};
    swapTwo(arr,4);
}