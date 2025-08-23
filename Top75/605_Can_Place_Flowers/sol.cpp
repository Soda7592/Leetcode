class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1 && n == 1) {
            return flowerbed[0] == 0;
        }
        for(int i=0;i<flowerbed.size() && n;i++) {
            if(i==0 && flowerbed[i] == 0) {
                if(flowerbed[i+1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else if(i == flowerbed.size()-1 && flowerbed[i] == 0) {
                if(flowerbed[i-1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return n==0;
    }
};
