class Solution {
private:
    bool isPossible(vector<int>& arr, int day, int m, int k){
        int cnt = 0;
        int noOfb = 0;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] <= day) cnt++ ;
            else {
                noOfb += (cnt/k);
                cnt = 0;
            }
        }
        noOfb += (cnt/k);
        return noOfb >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long prod= m * 1LL * k * 1LL;
        if (bloomDay.size() < prod) return -1;
        int r = INT_MIN;
        int l = INT_MAX;
        for(int i = 0; i < bloomDay.size(); i++){
            r = max(r, bloomDay[i]);
            l = min(l, bloomDay[i]);
        }
        while (l <= r){
            int mid = l + (r - l)/2;
            if (isPossible(bloomDay, mid, m, k)) r = mid - 1;
            else{
                l = mid + 1;
            }
        } 
        return l;
    }
};