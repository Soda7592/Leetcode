class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int rotDir = 0; //r d l u
        int x=0, y=0;
        int stop = 1;
        for(int i=0;i<n*n;i++) {
            ans[y][x] = i+1;
            if(rotDir == 0) 
                x++;
            else if(rotDir == 1) 
                y++;
            else if(rotDir == 2) 
                x--;
            else if(rotDir == 3) 
                y--;
            if(x == n-stop && rotDir == 0) 
                rotDir = (rotDir+1)%4;
            else if(y == n-stop && rotDir == 1) 
                rotDir = (rotDir+1)%4;
            else if(x == 0+stop-1 && rotDir == 2) 
                rotDir = (rotDir+1)%4;
            else if(y == 0+stop && rotDir == 3) {
                rotDir = (rotDir+1)%4;
                stop++;
            }
                
        }
        return ans;
    }
};
