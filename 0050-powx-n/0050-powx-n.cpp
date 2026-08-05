class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (n == 0) return 1;
        if (n < 0) {
            x = 1 / x;
            N = -(N);
        }
        return poW(x, N);
    }
private:
    double poW(double x, long long n){
        if (n == 0) return 1;
        double halfpow = poW(x, n/2);
        if (n % 2 == 0) return halfpow * halfpow;
        else {return x * halfpow * halfpow; }
    }
};