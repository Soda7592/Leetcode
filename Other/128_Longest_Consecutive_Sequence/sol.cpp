class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return 1;
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 1, head = 0, len;
        for(auto i:s) {
            if(!s.contains(i-1)) {
                head = i;
                len = 1;
                while(s.contains(head+1)) {
                    len++;
                    head++;
                }
                ans = max(len, ans);
            }
        }
        return max(len, ans);
    }
};
