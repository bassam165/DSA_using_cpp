#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxsum = INT_MIN;
    
    for(int st=0; st<n; st++){
        int cs = 0;
        for(int end=st; end<n; end++){
            cs += arr[end];
            maxsum = max(cs, maxsum);
        }
    }
    cout<< maxsum;

    return 0;
}
