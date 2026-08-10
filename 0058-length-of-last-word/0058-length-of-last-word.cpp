class Solution {
public:
    int lengthOfLastWord(string s) {
        int m = s.size() - 1;
        int cnt = 0;
        while(m >= 0 && s[m] == ' '){
            m--;
        }
        while(m >= 0 && s[m] != ' '){
            cnt = cnt + 1;
            m--;
        }
        return cnt;
    }
};