class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1 || n % 2 == 1 || n == 0) return (n == 1);
        return isPowerOfTwo(n/2);
    }
};