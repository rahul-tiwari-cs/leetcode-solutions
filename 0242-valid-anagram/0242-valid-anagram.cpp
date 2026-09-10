class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++){
            if(mpp.find(s[i]) != mpp.end()){
                mpp[s[i]] += 1;
            } else {
                mpp[s[i]] = 1;
            }
        }
        for (int i = 0; i < t.size(); i++){
            if (mpp.find(t[i]) != mpp.end() && mpp[t[i]] >= 1){
                mpp[t[i]] -= 1;
            } else {
                return false;
            }
        }
        return true;
    }
};