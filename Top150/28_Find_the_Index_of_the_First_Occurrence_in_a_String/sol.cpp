class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1, len=haystack.size(), count_index=0, check=0;
        if(len < needle.size())
            return -1;
        for(int i=0;i<len;i++) {
            int j = i;
            check = count_index = 0;
            while(needle[count_index]==haystack[j]) {
                check++;
                count_index++;
                j++;
                if(count_index == needle.size())
                    break;
                if(j == len)
                    break;
            } 
            if(check == needle.size()) {
                index = i;
                break;
            }
        }
        return index;
    }
};
