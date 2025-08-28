class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1, i, zero=1, sum=0, p0=1, zeros=0;
        vector<int> ans(nums.size(), 0);
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != 0) {
                product*=nums[i];
                p0=0;
            }
            else {
                zero=0;
                zeros++;
            }
            sum += nums[i];
        }
        if(p0==1 && !sum)
            return ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0 && zeros>=2)
                ans[i] = 0;
            else if(nums[i] == 0 && zeros==1)
                ans[i] = product;
            else if(nums[i] != 0 && !zero) {
                ans[i] = 0;
            }
            else {
                ans[i] = (product/nums[i]);
            }
        }
        return ans;
    }
};
