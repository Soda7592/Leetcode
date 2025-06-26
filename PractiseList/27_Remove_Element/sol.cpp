class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0, len = nums.size();
        auto i=nums.begin();
        while(i != nums.end()) {
            if(*i == val) {
                i = nums.erase(i);
            }
            else {
                i++;
                count++;
            }
        }
        return count;
    }
};
