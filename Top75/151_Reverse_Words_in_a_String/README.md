# Description
# Approach

if there is a vector `l` with four elements a, b, c and d.
l[0] = a
l[1] = b
l[2] = c
l[3] = d
then ans is
ans[0] = b*c*d
ans[1] = a*c*d
ans[2] = a*b*d
ans[3] = a*b*c

first for loop make `l` vector become
l[0] = 1
l[1] = a
l[2] = a*b
l[3] = a*b*c

so we need second for loop to fill in the missing pieces
l[3] = a*b*c
l[2] = a*b*d
l[1] = a*c*d
l[0] = b*c*d
