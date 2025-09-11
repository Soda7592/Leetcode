class Solution {
public:
    string sortVowels(string s) {
        unordered_map<char, char> dict;
        priority_queue<char, vector<char>, greater<char>> pq;
        queue<int> index;
        dict['a'] = 'A';
        dict['e'] = 'E';
        dict['i'] = 'I';
        dict['o'] = 'O';
        dict['u'] = 'U';
        dict['A'] = 'a';
        dict['E'] = 'e';
        dict['I'] = 'i';
        dict['O'] = 'o';
        dict['U'] = 'U';
        for(int i=0;i<s.size();i++) {
            if(dict.contains(s[i])) {
                index.emplace(i);
                pq.emplace(s[i]);
            }
        }
        // for(int i=0;i<index.size();i++)
        //     cout << index[i] << " ";
        
        // cout << endl;
        while(!pq.empty()) {
            char t = pq.top();
            int ind = index.front();
            s[ind] = t;
            pq.pop();
            index.pop();
        }
        return s;
    }
};
