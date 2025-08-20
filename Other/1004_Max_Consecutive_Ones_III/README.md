# Description
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

# Approach

Although this problem has a tag `prefix sum`, the most elegant solution is `sliding window`.
We can use sliding window concept to consider this problem, when there is a `1` expand window, otherwise we use k times extension opportunities. When we use extenstion opportunities is going to two situation we need to consider thatone is k != 0 the other is k ==0.

When k == 0, we need to reclaim the part of k used last time.
When k != 0, we just expand our window simply.
