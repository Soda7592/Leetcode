class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        if(s.size() == 0)
            return 0;
        else if(s.size() == 1)
            return 1;
        int len=0, ans=0;
        int l = 0, r = 0;
        while(l <= s.size()-1 && r <= s.size()-1) {
            if(!se.contains(s[r])) {
                se.insert(s[r]);
                len++;
                r++;
                ans = max(ans, len);
            }
            else {
                while(se.contains(s[r])){
                    se.erase(s[l]);
                    l++;
                }
                len = se.size();
            }
        }
        return ans;
    }
};
