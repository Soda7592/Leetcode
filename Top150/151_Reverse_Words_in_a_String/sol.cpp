class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        string ans = "";
        int l = s.size(), left=0, right=l-1;
        while(s[left] == ' ' || s[right] == ' ') {
            if(s[left] == ' ')
                left++;
            if(s[right] == ' ')
                right--;
        }

        int nowisspace = 0;
        for(int i=right;i>=left;i--) {
            if(s[i] != ' ') {
                str+=s[i];
                nowisspace = 0;
            }
            else if(s[i] == ' ') {
                if(!nowisspace) {
                    reverse(str.begin(),str.end());
                    ans += str;
                    ans += ' ';
                    nowisspace = 1;
                    str = "";
                }
                else if(nowisspace) {
                    continue;
                }
            }
        }
        reverse(str.begin(),str.end());
        ans += str;
        return ans;
    }
};
