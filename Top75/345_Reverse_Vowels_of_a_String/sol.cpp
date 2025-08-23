class Solution {
public:
    bool vowcheck(char a) {
        if(a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u'
        && a != 'A' && a != 'E' && a != 'I' && a != 'O' && a != 'U')
            return true;
        else
            return false;
    }

    string reverseVowels(string s) {
        if(s.size() == 1)
            return s;
        int left=0, right=s.size()-1;
        while(left<=right) {
            while(vowcheck(s[left]) && left < s.size()) {
                left++;
                if(left>=s.size())
                    break;
            }
            while(vowcheck(s[right]) && right >= 0) {
                right--;
                if(right < 0)
                    break;
            }
            if(left > right)
                break;
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return s;
    }
};
