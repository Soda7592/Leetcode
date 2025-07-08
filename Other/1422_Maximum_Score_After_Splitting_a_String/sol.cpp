class Solution {
public:
    int maxScore(string s) {
        vector<int> leftPrefix(s.size(),0);
        vector<int> rightPrefix(s.size(),0);
        leftPrefix[0] = (int)(s[0] == '0');
        rightPrefix[0] = (int)(s[s.size()-1] == '1');
        int max = -1;
        for(int i=1;i<s.size();i++) {
            leftPrefix[i] = (int)(s[i] == '0') + leftPrefix[i-1];
            rightPrefix[i] = (int)(s[s.size()-1-i] == '1') + rightPrefix[i-1];
            if(leftPrefix[i] == s.size())
                leftPrefix[i] = -1;
            else if(rightPrefix[i] == s.size())
                rightPrefix[i] = -1;
        }
        for(int i=0;i<s.size()-1;i++) {
            if(max < leftPrefix[i] + rightPrefix[s.size()-2-i]) 
                max = leftPrefix[i] + rightPrefix[s.size()-2-i];
        }
        return max;
    }
};
