#include <iostream>
using namespace std;

int rBinary(int arr[], int s, int e, int key){
    if(s > e) return -1;
    int mid = s + (e - s) / 2;
    if(key == arr[mid]) return mid;
    else if(key > arr[mid]) return rBinary(arr, mid + 1, e, key);
    else return rBinary(arr, mid - 1, e, key);
}

int main()
{
     int arr[] = {2,3,4,5,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     int result = rBinary(arr, 0, n, 4);
     if(result == -1) cout<< "not found";
     else cout<< "found";
}
