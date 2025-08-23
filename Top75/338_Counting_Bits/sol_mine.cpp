class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.emplace_back(0);
        if(!n)
            return ans;
        ans.emplace_back(1);
        if(n == 1)
            return ans;
        for(int i=2;i<=n;i++) {
            int temp = log2(i);
            if(temp == log2(i)) 
                ans.emplace_back(1);
            else {
                int p = pow(2, temp);
                int index = i-p;
                ans.emplace_back(ans[p] + ans[index]);
            }
        }
        return ans;
    }
};
