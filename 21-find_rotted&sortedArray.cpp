#include<iostream>
using namespace std;
bool rotteds(int arr[], int n){
    int coun=0;
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i]){
            coun++;
        }
    }
    if(arr[n-1] > arr[0])
    coun++;
    return coun<=1;
}
int main()
{
    int arr[4]={2,1,3,4};
    rotteds(arr,4);
}
