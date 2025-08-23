/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long left=1, mid=n/2, right=n;
        int res = guess(mid);
        while(res != 0) {
            if(res == -1) {
                right = mid-1;
                mid = (right+left)/2;
            }
            else if(res == 1) {
                left = mid+1;
                mid = (right+left)/2;
            }
            res = guess(mid);
        }
        return mid;
    }
};
