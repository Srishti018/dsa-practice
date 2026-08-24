class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0;
        int sell=1;
        int maxp=0;
        if(prices.size()==2 && prices[0]<prices[1]){
            maxp=prices[1]-prices[0];
        }
        while(sell<prices.size()){
            if(prices[buy]>prices[sell]){
                buy=sell;
                sell++;
            } else {
                int profit=prices[sell]-prices[buy];
                maxp=max(maxp,profit);
                sell++;
            }
        }
        return maxp;
    }
};