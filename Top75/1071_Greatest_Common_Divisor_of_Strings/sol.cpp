class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 != str2+str1)
            return "";
        int a = str1.size(), b = str2.size(), temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        string ans = "";
        for(int i=0;i<a;i++) {
            ans += str1[i];
        }
        return ans;
    }
};
