class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size(), max_index = 0, max_num = -1;
        for(int i=0;i<nums.size();) {
            if(i + nums[i] >= l-1)
                return true;
            else {
                for(int j=1;j<=nums[i];j++) {
                    if(max_num <= nums[i+j] + j) {
                        max_num = nums[i+j] + j;
                        max_index = i+j;
                    }
                }
            }
            i = max_index;
            if(!nums[i])
                return false;
            max_index = 0;
            max_num = -1;
        }
        return true;
    }
};
