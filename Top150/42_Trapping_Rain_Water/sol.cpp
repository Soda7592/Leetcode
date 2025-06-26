class Solution {
public:
    int trap(vector<int>& height) {
        int lmax, rmax, l=0, r=height.size()-1;
        int total = 0;
        while(l<r) {
            if(height[l] < height[r]) {
                lmax = max(lmax, height[l]);
                total += (lmax - height[l]);
                l++;
            }
            else if(height[l] >= height[r]) {
                rmax = max(rmax, height[r]);
                total += (rmax - height[r]);
                r--;
            }
        }
        return total;
    }
};
