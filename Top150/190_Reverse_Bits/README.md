# Description
# Approach
the loop for 32 bits and the steps are:
1. pick up 1 bit from the rightmost position (this can be solved with `n&1`).
2. In order to leave a space for next step, `result` shift left 1 bit.
3. `result` append a new bit from `curbit`.
4. Right shift `n` for next bit.
