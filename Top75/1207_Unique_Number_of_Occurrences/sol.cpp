class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m, m2;
        for(int i=0;i<arr.size();i++) {
            m[arr[i]]++;
        }
        for(auto &a:m) {
            if(m2.contains(a.second))
                return false;
            else 
                m2[a.second] = a.first;
        }
        return true;
    }
};
