class Solution {
private:
    int absl(int i, int j){
        return (i > j) ? i - j : j - i;
    }
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            if (mpp.find(nums[i]) != mpp.end()){
                if (absl(mpp[nums[i]], i) <= k) return true;
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};