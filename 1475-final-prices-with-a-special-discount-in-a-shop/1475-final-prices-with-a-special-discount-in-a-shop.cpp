class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i,j,cntf,cntnf;
        int n=prices.size();
        vector<int>temp;
        for(i=0;i<n;i++){
            cntf=0;cntnf=0;
            for(j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                temp.push_back(prices[i]-prices[j]);
                cntf++;
                break;
                }
                else{
                    cntnf++;
                }
                }
                if(cntf==0){
                    temp.push_back(prices[i]);
            }
        }
        return temp;
    }
};