class Solution {
private:
    bool isRequired(vector<int>& weights, int capacity, int gDays){
        int day = 1;
        int load = 0;
        for (int i = 0; i < weights.size(); i++){
            if (load + weights[i] > capacity){
                day++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return (day <= gDays);
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 0;
        for (int i = 0; i < weights.size(); i++){
            l = max(l, weights[i]);
            r += weights[i];
        }
        while (l <= r){
            int mid = l + (r - l)/2;
            if (isRequired(weights, mid, days)) r = mid - 1;
            else {
                l = mid + 1;
            }
        }
        return l;
    }
};