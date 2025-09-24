# Description
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
Example 3:

Input: nums = [1,0,1,2]
Output: 3

# Approach
透過 `unordered_set<int>` 可以做到去重複。接著的關鍵是**找到序列的開頭**，
我們不需要每個序列都去找出由他開始的最大序列，既然是找最長的那勢必是從最小的開始找。

所以透過 `s.contains(i-1)` 可以找到最適合的起點，找到起點後就連續的看看 `s.contains(i+1)` 是否存在即可。
這樣不論出現多少個備選序列都能在 O(N) 時間內找到最長的一條。

