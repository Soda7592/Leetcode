class Solution {
public:
    bool isHappy(int n) {
        int sum = n;
        int times = 0;
        while(sum != 1 && times != 30) {
            sum = Square(sum);
            times++;
        }
        if(times == 30)
            return false;
        return true;
    }
    int Square(int n) {
        int sum = 0;
        while(n != 0) {
            int t = n%10;
            sum += t*t;
            n /= 10; 
        }
        return sum;
    }
};
