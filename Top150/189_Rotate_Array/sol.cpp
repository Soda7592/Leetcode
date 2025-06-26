class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp = nums;
        int len = nums.size();
        int rotateTimes = k%len;
        if(!rotateTimes)
            return;
        int index = len - rotateTimes;
        int element0 = nums[index];
        for(int i=0;i<len;i++) 
            nums[i] = temp[(index+i)%len];
    }
};
