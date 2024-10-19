#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {2, 3, 5, 6, 7};
    int target = 5;
    int i = 0, j = nums.size() - 1;
    
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target) j--;
        else if(pairSum < target) i++;
        else {
            cout<< nums[i] <<" " <<nums[j];
        }
    }
    return 0;
}
