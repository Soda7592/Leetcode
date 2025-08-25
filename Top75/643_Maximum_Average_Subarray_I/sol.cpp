class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=nums[0], _k=1, i=0, j=1, max = nums[0];
        while(j<nums.size()) {
            if(_k != k) { 
                sum += nums[j];
                max += nums[j];
                j++;
                _k++;
            }
            else {
                sum = sum + nums[j] - nums[i];
                if(max < sum)
                    max = sum;
                i++;
                j++;
            }
        }
        return max/k;
    }
};
