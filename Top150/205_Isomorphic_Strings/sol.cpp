class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapS_to_T;
        unordered_map<char, char> mapT_to_S;
        for (int i=0;i<s.length();i++) {
            char chars = s[i];
            char chart = t[i];
            if (mapS_to_T.count(chars)) {
                if (mapS_to_T[chars] != chart) {
                    return false;
                }
            } 
            else {
                mapS_to_T[chars] = chart;
            }

            if (mapT_to_S.count(chart)) {
                if (mapT_to_S[chart] != chars) {
                    return false;
                }
            } 
            else {
                mapT_to_S[chart] = chars;
            }
        }
        return true;
    }
};
