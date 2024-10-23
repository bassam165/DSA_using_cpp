#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int st = 0, end = n - 1, tg = 5;  

    while (st <= end) {
        int mid = (st + end) / 2;
        if (arr[mid] < tg) st = mid + 1;     
        else if (arr[mid] > tg) end = mid - 1;
        else {
            cout << "ans is: " << mid;
            break;
        }
    }
    
    return 0;
}
