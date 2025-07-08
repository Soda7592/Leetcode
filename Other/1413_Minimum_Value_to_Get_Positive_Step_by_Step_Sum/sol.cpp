class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        int min = nums[0];
        prefix[0] = nums[0];
        for(int i=1;i<nums.size();i++) {
            prefix[i] = prefix[i-1] + nums[i];
            if(min > prefix[i])
                min = prefix[i];
        }
        if(min < 0)
            return abs(min)+1;
        return 1;
    }
};
