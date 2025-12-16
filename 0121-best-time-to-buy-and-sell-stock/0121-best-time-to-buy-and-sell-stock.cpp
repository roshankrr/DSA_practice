class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prevmin=prices[0];
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(maxprofit<(prices[i]-prevmin)){
                maxprofit=max(maxprofit,(prices[i]-prevmin));
            }
            if(prevmin>prices[i])prevmin=prices[i];
        }
        return maxprofit;
    }
};