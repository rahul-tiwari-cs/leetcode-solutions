class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string res = "";
    int n = strs[0].size();
    int m = strs.size();
    for(int i = 0; i < n; i++){
        for (int j = 0; j < (m-1); j++){
            if (strs[j][i] != strs[j+1][i]) return res;
        }
        res += strs[0][i];
    }

    return res;
    }
};