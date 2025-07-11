class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0], hare = nums[nums[0]];
        while(tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        }
        tortoise = 0;
        while(tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return tortoise;
    }
};
