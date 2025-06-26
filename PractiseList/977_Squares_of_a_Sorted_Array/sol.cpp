class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int lindex = -1, rindex;
        vector<int> merge;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < 0) 
                lindex = i;
            nums[i] *= nums[i];
        }
        if(lindex == -1)
            return nums;
        else 
            rindex = lindex + 1;
        if(rindex == nums.size()) {
            for(int i=nums.size()-1;i>=0;i--) 
                merge.emplace_back(nums[i]);
            return merge;
        }
        while(rindex < nums.size() || lindex >= 0) {
            if(rindex >= nums.size()) {
                merge.emplace_back(nums[lindex]);
                lindex--;
            }
            else if(lindex < 0) {
                merge.emplace_back(nums[rindex]);
                rindex++;
            }
            else {
                if(nums[rindex] >= nums[lindex]) {
                    merge.emplace_back(nums[lindex]);
                    lindex--;
                }
                else {
                    merge.emplace_back(nums[rindex]);
                    rindex++;
                }
            }
        }
        return merge;
    }
};
