# Description
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.

# Approach
Because this problem only care about intersection and unique, it's very suitable for hash table. We can use `unordered_set` to solve this problem faster than other method. `nordered_set`  was implemented by hash table, finding, inserting, deleting can complete in O(1) time (average time).
