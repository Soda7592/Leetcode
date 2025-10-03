class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++) {
            vector<int> v(i, 1);
            ans.emplace_back(v);
        }
        for(int i=2;i<numRows;i++) {
            for(int j=1;j<i;j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};
