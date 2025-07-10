# Description
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 
# Approach
As long as any word in magazine can be split into ransomeNote, true is returned. We can directly create a hash table or even an array to record the letters that appear, and then compare the number of times the letters appear in the two strings.
