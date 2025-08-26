class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        int lsum=0, rsum=0, sum=0;
        int i;
        for(i=0;i<nums.size();i++)
            sum+=nums[i];
        for(i=0;i<nums.size();i++) {
            rsum = sum - lsum - nums[i];
            if(rsum == lsum)
                return i;
            else 
                lsum += nums[i];
        }
        return -1;
    }
}; 
