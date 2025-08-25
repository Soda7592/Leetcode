class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0)
            return true;
        int si=0;
        for(int i=0;i<t.size();i++) {
            if(t[i] == s[si])
                si++;
            else if(si == s.size())
                break;
        }
        return si == s.size();
    }
};
