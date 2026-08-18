class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int ans = -1;
        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> seen_in_window;
            for (int j = i; j < i + k; j++) {
                seen_in_window.insert(nums[j]);
            }
            for (int val : seen_in_window) {
                mpp[val]++;
            }
        }
        for (int i = 0; i < n; i++){
            if (mpp[nums[i]] == 1){
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};