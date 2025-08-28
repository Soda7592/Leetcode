class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), product=1;
        vector<int> left(n);
        left[0] = 1;
        for(int i=1;i<n;i++) 
            left[i] = nums[i-1] * left[i-1];
        for(int i=n-1;i>=0;i--) {
            left[i] = left[i]*product;
            product *= nums[i];
        }
        return left;
    }
};
