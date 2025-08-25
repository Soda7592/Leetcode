class RecentCounter {
private :
    queue<int> q;
    int tmax;
    int tmin;
public:
    RecentCounter() {
        tmax = 0;
        tmin = INT_MAX;
    }
    int ping(int t) {
        q.emplace(t);
        tmax = t;
        tmin = t - 3000;
        queue<int> temp = q;
        int count = 0;
        while(!temp.empty()) {
            int a = temp.front();
            if(a <= tmax && a >= tmin) 
                count++;
            else 
                q.pop();
            temp.pop();
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
