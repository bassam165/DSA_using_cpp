#include<iostream>
using namespace std;
void rotted(int arr[], int n, int k){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
    for(int j=0; j<n; j++){
        cout<<arr[j];
    }
}
int main()
{
    int arr[4]={2,5,6,8};
    
    rotted(arr,4,2);
}
