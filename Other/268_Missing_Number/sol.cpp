class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expect, sum=0, max_ = -1, len = nums.size();
        expect = ((len+1)*len)/2;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
        }
        return expect - sum;
    }
};
