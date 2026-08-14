class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> set; 
       while (n != 1 && set.find(n) == set.end()){
        set.insert(n);
        n = sumOfSquares(n);
       }
       return (n==1);
    }
private:
    int sumOfSquares (int n){
        int sos = 0;
        while (n > 0){
            int m = n % 10;
            sos += (m * m);
            n /= 10;
        }
        return sos;
    }
};