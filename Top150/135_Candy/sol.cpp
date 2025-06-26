class Solution {
public:
    int candy(vector<int>& ratings) {
        int len = ratings.size();
        int count = 0;
        vector<int> ctable(len, 1);
        if(len == 1)
            return 1;
        for(int i=0;i<len-1;i++) {
            if(ratings[i+1] > ratings[i]) {
                ctable[i+1]  = max(ctable[i], ctable[i+1])+1;
            }
        }
        for(int i=len-1;i>0;i--) {
            if(ratings[i] < ratings[i-1] && ctable[i] >= ctable[i-1] ) {
                ctable[i-1] = ctable[i]+1;
            }
            count += ctable[i];
        }
        count += ctable[0];   
        return count;
    } 
};
