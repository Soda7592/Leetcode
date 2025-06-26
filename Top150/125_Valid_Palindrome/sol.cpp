class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==1 && !isalpha(s[0]) && !(s[0] - '0' >= 0 && s[0] -'0' <=9))
            return true;
        string str = "";
        for(int i=0;i<s.size();i++) {
            if(isalpha(s[i]) || (s[i] - '0' >= 0 && s[i] -'0' <=9))
                str += s[i];
        }
        int len=str.size(), l=-1, r=len, rstop, lstop;
        if(len%2 == 0) {
            lstop = len/2 - 1;
            rstop = len/2;
        } 
        else 
            lstop = rstop = len/2;
        while(r!=rstop && l!=lstop) {
            r--;
            l++;
            if(tolower(str[r]) != tolower(str[l])) 
                return false;
        }
        return true;
    }
};
