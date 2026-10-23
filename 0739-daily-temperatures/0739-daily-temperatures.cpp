class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i;
        int n=temperatures.size();
        vector<int>temp;
        stack<int>st;
        for(i=n-1;i>=0;i--){
            while(!st.empty()&&temperatures[st.top()]<=temperatures[i]){
            st.pop();
            }
            if(st.empty())
            temp.push_back(0);
            else
            temp.push_back(st.top()-i);
            st.push(i);
        }
        reverse (temp.begin(),temp.end());
        return temp;
    }
};