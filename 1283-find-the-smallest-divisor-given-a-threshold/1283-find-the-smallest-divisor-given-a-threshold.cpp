class Solution {
private:
    bool isSmallerThan(vector<int>& nums, int n, int threshold, int k){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += ceil((double)(nums[i])/ (double)(k));
        }
        return sum <= threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        if (n > threshold) return -1;
        int l = 1;
        int r = INT_MIN;
        for (int i = 0; i < n; i++){
            r = max(r, nums[i]);
        }
        while (l <= r){
            int mid = l + (r - l)/2;
            if (isSmallerThan(nums, n, threshold, mid)) r = mid - 1;
            else {
                l = mid + 1;
            }
        }
        return l;
    }
};