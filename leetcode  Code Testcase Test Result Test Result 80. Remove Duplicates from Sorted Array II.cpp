class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        for(int i=0; i<n; i++){
            if (i < n-2 && nums[i] == nums[i+2]) {
            continue;
        }
        nums[c++] = nums[i];
        }
        return c;
    }
};
