# Description
# Approach
We need to calculate a specific step's cost also need to record all cost so far.
-> dp[], cost[]

Since we can start at index zero or one staits. the DP array dp[0] and dp[1] are `0`

We can gain a dp transition function `dp = min(dp[i-1]+cost[i-1], dp[i-2]+cost[i-2])` 
