class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return 1;
        set<int> s(nums.begin(), nums.end());
        int ans = 1, max = -1;;
        for(auto i=s.begin();i!=prev(s.end());i++) {
            auto next_i = next(i);
            if(*next_i == (*i)+1) {
                ans++;
            }
            else {
                if(max < ans)
                    max = ans;
                ans = 1;
            }
        }
        if(max<ans)
            max = ans;
        return max;
    }
};
