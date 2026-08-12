class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1] += 1;
        int carry = (digits[n-1])/10;
        if (carry == 0) return digits;
        digits[n-1] %= 10;
        while (n-2 >= 0){
            digits[n-2] += carry;
            carry = digits[n-2] / 10;
            if (carry == 0) break;
            digits[n-2] %= 10;
            n--;
        }
        if (carry != 0){
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};