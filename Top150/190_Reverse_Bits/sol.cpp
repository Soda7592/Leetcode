class Solution {
public:
    int reverseBits(unsigned int n) {
        int result = 0;
        for(int i=0;i<32;i++) {
            int curbit = n & 1;
            result <<= 1;
            result |= (curbit);
            n >>= 1;
        }
        return result;
    }
};
