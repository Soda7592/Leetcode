# Description
Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15

# Approach

這一題應該有兩種或以上解法可以達到 O(N)
我嘗試了兩種，分別是 Sliding window 和 Prefix sum + Hash table

1. Sliding Window
基於連續、非負子陣列的條件非常適合使用 Sliding Window，但是`等於某值`的條件會導致使用 Sliding Window 出現誤差。
因為 Sliding Window 能夠非常好的計算出**至多在某個區間內**的子陣列數，若是要算等於就很只單純取出某個數值。

例如這題，如果直接用 sliding window 會算出 goal <= 2 的所有子陣列數(goal=2, goal=1, goal=0)。
但也能透過這個特性，只要把goal=2 - goal=1 的結果就會是我們要的答案。

(c = r - l + 1) 是 sliding window 的計數技巧，用來計算所有子陣列數。
