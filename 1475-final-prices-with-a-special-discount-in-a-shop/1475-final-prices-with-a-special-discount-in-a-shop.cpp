class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>temp;
        int i;
        stack<int>st;
        int n=prices.size();
        for(i=n-1;i>=0;i--){
            while(!st.empty() && prices[st.top()]> prices[i]){
            st.pop();
            }
            if(st.empty())
            temp.push_back(prices[i]);
            else
            temp.push_back(prices[i]-prices[st.top()]);
            st.push(i);
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};