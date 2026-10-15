class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0;
        int maxProfit = 0;

        while (l < prices.size() - 1) {
            r++;

            if (prices[r] < prices[l]) {
                if (r == prices.size() - 1) {
                    l++;
                    r = l;
                }
                continue;
            }

            int profit = prices[r] - prices[l];

            if (profit > maxProfit) {
                maxProfit = profit;
            }

            if (r == prices.size() - 1) {
                l++;
                r = l;
            }
        }

        return maxProfit;
    }
};