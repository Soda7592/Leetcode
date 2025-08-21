class Solution {
public:
    string addBinary(string a, string b) {
        int sum=0;
        int carry=0, ai=a.size()-1, bi=b.size()-1;
        string ans="";
        while(ai >= 0 || bi >= 0) {
            string tembit = "0";
            if(ai >= 0 && bi >= 0){
                int tbit = ((a[ai] - '0') + (b[bi] - '0') + carry);
                if(tbit >= 2) 
                    carry = 1;
                else
                    carry = 0;
                tbit %= 2;
                tembit[0] = (char)(tbit+'0');
                ai--;
                bi--;
            }
            else if(ai < 0) {
                int tbit = ((b[bi] - '0') + carry);
                if(tbit >= 2) 
                    carry = 1;
                else
                    carry = 0;
                tbit %= 2;
                tembit[0] = (char)(tbit+'0');
                bi--;
            }
            else {
                int tbit = ((a[ai] - '0') + carry);
                if(tbit >= 2) 
                    carry = 1;
                else
                    carry = 0;
                tbit %= 2;
                tembit[0] = (char)(tbit+'0');
                ai--;
            }
            ans += tembit;
        }
        if(carry == 1)
            ans += "1";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
