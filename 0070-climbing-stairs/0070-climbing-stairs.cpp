class Solution {
public:
    int climbStairs(int n) {
        int l = 1, r = 1;
        for(int i = 0; i < n-1; i++){
            int temp = l;
            l = l + r;
            r = temp; 
        }
        return l;
    }
};