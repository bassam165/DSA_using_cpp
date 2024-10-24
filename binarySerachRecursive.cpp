#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] < tar) {
            return binarySearch(arr, tar, mid + 1, end);
        } else if (arr[mid] > tar) {
            return binarySearch(arr, tar, st, mid - 1);
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int tar = 5;
    
    int result = binarySearch(arr, tar, 0, n - 1);
    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
