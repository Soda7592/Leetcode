# Description
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]


# Approach
We could divide the array to three case. All elements is positive numbers, all elements is negative numbers and include both positive and negative in array.

Only the third case need more attention, we can divide the array to two parts, "all negative part and postive part". Then we can complete the sort very easily by using the concept **merge operation of merge sort**.
