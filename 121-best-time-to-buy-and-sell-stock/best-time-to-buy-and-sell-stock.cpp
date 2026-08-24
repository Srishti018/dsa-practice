class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int maxp = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[buy]) {
                buy = i;
            } else {
                maxp = max(maxp, prices[i] - prices[buy]);
            }
        }
        return maxp;
    }
};
