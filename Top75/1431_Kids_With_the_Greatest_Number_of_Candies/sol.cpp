class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> ans;
        for(int i=0;i<candies.size();i++) {
            if(candies[i] > max)
                max = candies[i];
        }
        for(int i=0;i<candies.size();i++) {
            if(candies[i]+extraCandies >= max) {
                ans.emplace_back(true);
            }
            else {
                ans.emplace_back(false);
            }
        }
        return ans;
    }
};
