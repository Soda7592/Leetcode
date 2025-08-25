class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int start = 0, m=0;
       vector<int> alt(gain.size()+1);
       for(int i=0;i<gain.size();i++) {
            alt[i+1] = start + gain[i];
            start = start + gain[i];
            m = max(m, start);
       }
        return m;
    }
};
