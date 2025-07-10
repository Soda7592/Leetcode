class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for(int i=0;i<magazine.size();i++) {
            if(!m[magazine[i]])
                m[magazine[i]] = 1;
            else
                m[magazine[i]] += 1;
        }
        for(int i=0;i<ransomNote.size();i++) {
            if(m[ransomNote[i]])
                m[ransomNote[i]]--;
            else 
                return false;
        }
        return true;
    }
};
