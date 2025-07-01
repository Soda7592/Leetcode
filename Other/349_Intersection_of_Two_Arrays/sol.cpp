class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> set1(nums1.begin(), nums1.end());
        for(auto& i:nums2) {
            if(set1.count(i)) {
                ans.emplace_back(i);
                set1.erase(i);
            }
        }
        return ans;
    }
};
