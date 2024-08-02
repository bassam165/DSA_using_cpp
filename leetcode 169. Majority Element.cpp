class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major = nums[0];
        int count = 1;
        for(int i=1; i<n; i++){
            if(major == nums[i])
                count += 1;
            else{
                count -= 1;
                if(count == 0){
                    major = nums[i];
                    count = 1;
                }
            }
        }
        return major;
    }
};
