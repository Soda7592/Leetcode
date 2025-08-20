class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0, r=0, temp=0, count=0, ans=-1;
        while(r < nums.size() && l < nums.size()) {
            if(nums[r]) {
                count++;
                r++;
                ans = max(count, ans);
            }
            else if(!nums[r] && temp == k) {
                while(nums[l]) {
                    l++;
                    count--;
                }
                temp--;
                count--;
                l++;
            }
            else if(!nums[r]) {
                temp++;
                count++;
                ans = max(count, ans);
                r++;
            }
        }
        return ans;
    }
};
