class Solution {
public:
    int addDigits(int num) {
        if (num / 10 == 0) return num;
        int sum_of_digits = 0;
        while (num > 0){
            sum_of_digits += (num % 10);
            num /= 10;
        }
        return addDigits(sum_of_digits);
    }
};