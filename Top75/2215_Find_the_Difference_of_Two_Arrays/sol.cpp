class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        vector<int> num1, num2;
        vector<vector<int>> ans;
        for(int i=0;i<nums1.size();i++) {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++) {
            m2[nums2[i]]++;
        }
        for(auto &a:m1) {
            if(!m2[a.first])
                num1.emplace_back(a.first);
        }
        for(auto &a:m2) {
            if(!m1[a.first])
                num2.emplace_back(a.first);
        }
        ans.emplace_back(num1);
        ans.emplace_back(num2);
        return ans;
    }
};
