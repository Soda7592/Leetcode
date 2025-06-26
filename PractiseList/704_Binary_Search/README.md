# Description
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.


Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1

# Opinion

First, we need to consider sorting the array (although this problem specifies the array is already sorted.). Then we can implement the binary search logic. Set Left most and right most index, if `nums[(Right+Left)/2]` is smaller than target, we can ignore all elements on the left side of (r+l)/2, This logic also applies to right side.
