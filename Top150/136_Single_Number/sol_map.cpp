class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
            if(m[nums[i]] == 2)
                m.erase(nums[i]);
        }
        for(const auto &ms : m)
            return ms.first;
        return 0;
    }
};
