#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) return;
    }
    //printing
    cout<<"Bubble sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int si=i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[si]) si=j;
        }
        swap(arr[i],arr[si]);
    }
    //printing
    cout<<"Selection sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n-1; i++){
        int cur = arr[i];
        int prev = i - 1;
        while(prev>=0 && arr[prev]>cur){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = cur;
    }
     //printing
    cout<<"Insertion sort: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {4, 8, 9, 2, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr, n);
    return 0;
}
