class Solution {
public:
    bool isPowerOfThree(int n) {
       if (!isMultipleOfThree(n)) return (n == 1);
       return isPowerOfThree(n / 3);
    }
private:
    bool isMultipleOfThree(int n){
        int sod = 0;  //sum of digits
        while (n > 0){
            sod += (n % 10);
            n /= 10;
        }
        return (sod % 3 == 0 && sod !=0);
    }
};