class Solution {
public:
    int tribonacci(int n) {
        vector<int> trib(n+1, 0);
        if(n == 0)
            return 0;
        else if(n == 1 || n == 2)
            return 1;
        trib[1] = trib[2] = 1;
        for(int i=3;i<=n;i++) {
            trib[i] = trib[i-3] + trib[i-2] + trib[i-1];
        }
        return trib[n];
    }
};
