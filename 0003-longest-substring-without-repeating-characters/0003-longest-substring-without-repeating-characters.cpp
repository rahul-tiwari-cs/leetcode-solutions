class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        int i = 0;
        for(i ; i<256 ; i++){
            hash[i] = -1;
        }
        int n = s.size();
        int l = 0, r = 0, maxlen = 0;
        while (r < n){
            int ran = int(s[r]);
            if (hash[ran] != -1){
                if (hash[ran] >= l){
                    l = hash[ran] + 1;
                }
            }
            int len = r - l + 1;
            maxlen = max(len, maxlen);
            hash[ran] = r;
            r++;
        }
        return maxlen;
    }
};