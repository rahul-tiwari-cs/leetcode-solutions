class Solution {
public:
    int reverse(int x) {
        long long n = x < 0 ? -static_cast<long long>(x) : x;
        long long rev = 0;
        while (n != 0){
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }
        if (x < 0) rev = -rev;
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return static_cast<int>(rev);
    }
};