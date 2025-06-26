class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1, mid;
        int len = nums.size();
        // sort(nums.begin(), nums.end());
        while(true) {
            mid = (l+r)/2;
            if(nums[mid] < target) {
                if(mid+1 < len)
                    l = mid+1;
                else
                    l = mid;
            }   
            else if(nums[mid] > target) {
                if(mid-1 > 0)
                    r = mid-1;
                else 
                    r = mid;
            }
            else if(nums[mid] == target)
                return mid;
            if(mid == l || mid == r) {
                if(nums[l] == target)
                    return l;
                else if(nums[r] == target)
                    return r;
                else 
                    return -1;
            }
        }
        return 0;
    }
};
