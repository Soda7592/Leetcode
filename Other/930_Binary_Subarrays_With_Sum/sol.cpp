class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int l=0, r=0, value=0, count1=0;
        for(r=0;r<nums.size();r++) {
            value += nums[r];
            while(value > max(goal, 0)){
                value -= nums[l++];
            }
            count1 += (r - l + 1);
        }
        if(goal-1 < 0)
            return count1;

        int count2 = 0;
        l=0, value=0;
        for(r=0;r<nums.size();r++) {
            value += nums[r];
            while(value > max(goal-1, 0)){
                value -= nums[l];
                l++;
            }
            count2 += (r - l + 1);
        }
        return count1 - count2;
    }
};
