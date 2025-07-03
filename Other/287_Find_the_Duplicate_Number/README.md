# Description
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3
Example 3:

Input: nums = [3,3,3,3,3]
Output: 3

# Approach

We can use hash table or two pointers concepts to solve this problem. If using hash table, `unordered_set` is the better choice than set or map. If using two pointers, tortoise and hare algorithm is the key point. tortoise goes 1 step and hare goes two steps can find a cycle easily. Because the problem promised that values in n is always <= n, we could consider the values as a index besides the repeted value. First while loop can find a cyclic point. When we find a cyclic point, we can start second while loop. In second while loop you can see `hare` pointer be lost in cycle. (for example: [1, 3, 4, 2, ], 2->4->2...) 

Since the cyclic loop when `tortoise` arrive cyclic point, `hare` also in the cyclic point.
 
