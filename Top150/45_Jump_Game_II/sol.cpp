class Solution {
public:
    int jump(vector<int>& nums) {
        int l = nums.size(), max_index = 0, max_num = -1;
        int count = 0;
        if(l == 1)
            return count;
        
        for(int i=0;i<nums.size();) {
            if(i + nums[i] >= l-1) {
                count++;
                return count;
            }
            else {
                for(int j=1;j<=nums[i];j++) {
                    if(max_num <= nums[i+j] + j) {
                        max_num = nums[i+j] + j;
                        max_index = i+j;
                    }
                }
            }
            i = max_index;
            count++;
            max_index = 0;
            max_num = -1;
        }
        return true;
    }
};
