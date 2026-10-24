class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,min=prices[0],maxprofit=0;
        int profit;
        int n=prices.size();
        for(i=1;i<n;i++){
            profit=prices[i]-min;
            if(profit>maxprofit){
            maxprofit=profit;
            }
            if(prices[i]<min){
                min=prices[i];
            }
        }
        return maxprofit;
    }
};