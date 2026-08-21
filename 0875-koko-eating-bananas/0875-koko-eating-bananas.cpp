class Solution {
private:
    bool eatenInTime(vector<int>& piles, int h, int k){
        long long sum = 0;
        for(int i=0; i < piles.size(); i++){
            if (piles[i] % k == 0) sum += (piles[i]/k);
            else {sum += (piles[i]/k) + 1;}
        }
        return (sum <= h);
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        while (l <= r){
            int mid = l + (r - l)/2;
            if (eatenInTime(piles, h, mid)) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }  
        return ans;  
    }
};