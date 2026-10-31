class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int profit=0;
        int totprofit=0;
        int mini=0;
        for(i=0;i<prices.size();i++){
            if(prices[i]<=prices[mini]){
                mini=i;
                profit=0;
            }
            else{
                profit=prices[i]-prices[mini];
                mini=i;
            }
            totprofit+=profit;
        }
        return totprofit;
    }
};