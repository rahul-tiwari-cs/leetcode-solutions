class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int n1 = a.size();
        int n2 = b.size();
        string res = "";
        while ((n1-1) >= 0 || (n2-1)  >=0 || carry){
            int sum = carry;
            if (n1-1 >= 0) {sum += a[n1-1] - '0'; n1--;}
            if (n2-1 >= 0) {sum += b[n2-1] - '0'; n2--;}
            carry = sum/2;
            res += (sum % 2) + '0';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};