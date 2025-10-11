class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle);
        for(int i=1;i<triangle.size();i++) {
            for(int j=0;j<triangle[i].size();j++) {
                if(j-1 >= 0 && j < triangle[i-1].size()) {
                    dp[i][j] = min(dp[i][j]+dp[i-1][j-1], dp[i][j]+dp[i-1][j]);
                }
                else if(j-1 < 0) {
                    dp[i][j] = dp[i][j] + dp[i-1][j];
                }
                else if(j >= triangle[i-1].size()) {
                    dp[i][j] = dp[i][j] + dp[i-1][j-1];
                }
            }
        }
        int ans = INT_MAX;
        for(int j=0;j<triangle[triangle.size()-1].size();j++) {
            ans = min(ans, dp[triangle.size()-1][j]);
        }
        return ans;
    }
};
