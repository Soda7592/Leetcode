class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, right=0, minlen=9999999, sum=0;
        for(right=0;right<nums.size();right++) {
            sum += nums[right];
            while(sum >= target) {
                minlen = min(minlen, right-left+1);
                sum -= nums[left++];
            }
        }
        return minlen==9999999?0:minlen;
    }
};
