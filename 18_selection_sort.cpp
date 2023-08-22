#include<iostream>
using namespace std;

void sort(int arr[],int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }    
        }
        //copy temp value
        arr[j+1] = temp;  
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    } 
}

int main()
{
    int arr[5]={2,8,6,9,4};
    sort(arr,5);
}