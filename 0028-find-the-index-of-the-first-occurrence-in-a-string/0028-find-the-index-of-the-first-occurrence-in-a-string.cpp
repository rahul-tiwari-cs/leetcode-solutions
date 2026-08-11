class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        // Slide a window of length m across haystack
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }

        return -1;
    }
};