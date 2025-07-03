# Description
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

# Approach

Although it's a easy problem but we still purse the most elegant solution in O(N) time complexity and O(1) space complexity.

Because it doesn't care about sorted or not(just keep original number sequence). We set two pointers one in 0 and second for traversal a nums vector. If we meet a non-zero value, just swap two values in these index. It's can cover all case even only has a 0 or no element in nums vector.

