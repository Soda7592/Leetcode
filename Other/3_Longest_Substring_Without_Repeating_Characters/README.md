# Description
Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

# Approach
透過 `unordered_set` 儲存字串並且去重複，一旦出現重複那前面的子字串就不能用了，所以要把字串`erase`到出現重複的字元的那個為止。
例如 abcdefbghij，abcdef b 這時候 b 已經是重複的字元，所以要把前面出現的字串一直進行`erase`直到第一個b也`erase`為止，
這樣才能繼續使用前面已經紀錄的長度。 
