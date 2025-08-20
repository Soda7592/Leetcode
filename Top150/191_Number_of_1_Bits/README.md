# Description
# Approach
Brian Kernighan's Algorithm said that
if you want to calculate that how many zeros in a binary number.
you can do n&(n-1) until n = 0.

For Example:
n = 12 (1100)
n & (n-1) = 1100 & 1011 = 1000
n & (n-1) = 1000 & 0111 = 0000

loop will run twice and the ans is 2.
