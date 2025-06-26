class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size()-1, l=0;
        vector<int> ans = {l, r};
        while(r>=0) {
            while(numbers[r] + numbers[l] < target) {
                if(l < r) 
                    l++;
                if(l == r)
                    break;              
            }
            while(numbers[r] + numbers[l] > target) {
                if(l > 0) 
                    l--;
                if(l == 0)
                    break;
            }
            if(numbers[r] + numbers[l] == target) {
                vector<int> ans2 = {l+1, r+1};
                return ans2;
            }
            r--;
        }
        return ans;
    }
};
