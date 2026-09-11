class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = INT_MIN;
        int minp = INT_MAX;
        int profit = 0;
        for (int i = 0; i < n; i++) {

         minp = min(minp, prices[i]);
            profit = max(profit, prices[i] - minp);
        }

        return profit;
    }
};