# Description
# Approach
There is a array `r` with four elements a, b, c and d.
We need to let the array become
r[0] = b*c*d
r[1] = a*c*d
r[2] = a*b*d
r[3] = a*b*c

so after first for loop ends the array `r` is
r[0] = 1
r[1] = a
r[2] = a*b
r[3] = a*b*c

after second loop, We fill in the missing places.
r[0] = 1*(b*c*d)
r[1] = a*(c*d)
r[2] = a*(b*d)
r[3] = 1*(a*b*c)
