class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int n = prices.size(), buy = prices[0];
        for(int i=1; i<n; i++){
            int sell = prices[i];
            int profit = sell-buy;
            max_profit = max(max_profit,profit);
            buy = min(prices[i],buy);
        }
        return max_profit;
    }
};
