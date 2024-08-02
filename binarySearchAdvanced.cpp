#include <iostream>
using namespace std;

int binarSearch(int s, int e, int arr[], int key){
    while(s<=e){
        int mid = s + (e-s)/2;
        
        if(arr[mid == key]){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {3,2,4,5,6,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarSearch(0, n, arr, 2);
    if(result == -1) cout<<"not found";
    else cout<<"found in arr";
    return 0;
}