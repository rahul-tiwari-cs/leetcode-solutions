class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int pro = 0;
        for(int i = 0; i < prices.size(); i++){
            if (buy >= prices[i]){
                buy = prices[i];
            }
            int profit = prices[i] - buy;
            pro = max(pro, profit);
        }
        return pro;
    }
};