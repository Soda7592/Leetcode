class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for(int i=0;i<spells.size();i++) {
            long long target = (success+spells[i]-1)/spells[i];
            // long long temp = (long long)((long long)spells[i]*(long long)target);
            int res = binsearch(target, potions);
            ans.emplace_back(potions.size()-res);
        }
        return ans;
    }
    int binsearch(long long target, vector<int>& potions) {
        int l=0, r = potions.size();
        int boundary = r;
        while(l<r) {
            int mid = l + (r-l)/2; // equals to mid = (l+r)/2 but avoiding the integer overflow. 
            if(potions[mid] >= target) {
                boundary = mid;
                r = mid;
            }
            else {
                l = mid + 1;
            }
        }
        return boundary;
    }
};
