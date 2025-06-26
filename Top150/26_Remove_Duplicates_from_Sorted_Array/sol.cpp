class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = -999;
        auto i = nums.begin();
        while(i != nums.end()) {
            if(*i != k) {
                k = *i;
                i++;
            }
            else 
                i = nums.erase(i);
        }
        return nums.size();
    }
};
