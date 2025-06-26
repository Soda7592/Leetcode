class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0, flag = 0;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i] != ' ' && !flag)
                flag = !flag;
            if(flag && s[i] == ' ')
                break;
            if(flag)
                count++;
        }
        return count;
    }
};
