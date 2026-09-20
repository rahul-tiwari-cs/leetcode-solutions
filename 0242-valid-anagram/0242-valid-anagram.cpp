class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> S(26, 0);
        vector<int> T(26, 0);
        for (int i = 0; i < s.size(); i++){
            S[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++){
            T[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++){
            if (S[i] != T[i]) return false;
        }
        return true;
    }
};