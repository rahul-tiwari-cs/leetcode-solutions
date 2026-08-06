class Solution {

private:
    int reverse_of_num (int n){
        long rn = 0;
        while (n > 0){
            long long last = n % 10;
            rn = rn * 10 + last;
            n /= 10;
        }
        return (rn > INT_MAX) ? 0 : (int)rn;
    }

public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int n = reverse_of_num(x);
        if (x == n) return true;
        return false;
    }
};