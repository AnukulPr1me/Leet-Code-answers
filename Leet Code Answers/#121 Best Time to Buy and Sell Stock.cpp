class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimumPrice = INT_MAX;
        int maximumProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minimumPrice) {
                minimumPrice = prices[i];
            } else if (prices[i] - minimumPrice > maximumProfit) {
                maximumProfit = prices[i] - minimumPrice;
            }
        }
        return maximumProfit;
    }
};