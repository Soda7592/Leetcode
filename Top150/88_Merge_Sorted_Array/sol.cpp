class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lindex = 0, rindex = 0;
        vector<int> nums3;
        while(lindex < m || rindex < n) {
            if(n == 0) 
                nums3.emplace_back(nums1[lindex++]);
            else if(rindex >= n)
                nums3.emplace_back(nums1[lindex++]);
            else if(lindex >= m) 
                nums3.emplace_back(nums2[rindex++]);
            else if(nums1[lindex] >= nums2[rindex]) 
                nums3.emplace_back(nums2[rindex++]);
            else 
                nums3.emplace_back(nums1[lindex++]);
        }
        nums1 = nums3;
    }
};
