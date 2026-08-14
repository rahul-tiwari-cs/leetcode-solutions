class Solution {
public:
    string triangleType(vector<int>& nums) {
        if (nums[0] == nums[1] && nums[1] == nums[2]) return "equilateral";
        if (isTriangle(nums)){
            if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) return "isosceles";
            else {return "scalene";}
        }
        return "none";
    }
private:
    bool isTriangle(vector<int>& n){
        if (n[0] + n[1] > n[2] && n[0] + n[2] > n[1] && n[2] + n[1] > n[0]) return true;
        return false;
    }
};