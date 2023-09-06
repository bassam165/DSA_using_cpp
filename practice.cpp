
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the next greater number
string nextGreaterNumber(string num) {
    int n = num.size();
    int i = n - 2;

    // Find the first digit smaller than the digit to its right
    while (i >= 0 && num[i] >= num[i + 1]) {
        i--;
    }

    if (i == -1) {
        // No such digit found, impossible to create a greater number
        return "-1";
    }

    // Find the smallest digit to the right of digit1 that is greater than digit1
    int j = n - 1;
    while (num[j] <= num[i]) {
        j--;
    }

    // Swap digit1 and digit3
    swap(num[i], num[j]);

    // Sort all the digits to the right of digit1
    reverse(num.begin() + i + 1, num.end());

    return num;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string num;
        cin >> num;

        string result = nextGreaterNumber(num);
        cout << result << endl;
    }

    return 0;
}
