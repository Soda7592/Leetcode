# Description
# Approach
1. if there is a ans, its length must a greatest common divisor of strings.
denoting the ans as x.
2. str1 and str2 must consist by (x+x+x+...+x+x) so str1 + str2 == str2 + str1 if there is a ans.

- first need to detect (str1 + str2 == str2 + str1)
- Calculate the gcd of str1.length, str2.length. -> a
- X can be picked from str1[0] ~ str1[a-1];  (str1 is composed by x+x+x+x ... )
