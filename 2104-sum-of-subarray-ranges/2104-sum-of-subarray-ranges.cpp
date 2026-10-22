class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int>nse(n);
        vector<int>pse(n);
        vector<int>nge(n);
        vector<int>pge(n);
        stack<int>st;
        long long summax=0;
        long long summin=0;
        int i;
        
        for(i=0;i<n;i++){
            while(!st.empty()&& nums[st.top()]>nums[i]){
                st.pop();
            }
            if(st.empty())
            pse[i]=-1;
            else
            pse[i]=st.top();
            st.push(i);       
        }
        while(!st.empty())
        st.pop();
        for(i=n-1;i>=0;i--){
            while(!st.empty()&& nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty())
            nse[i]=n;
            else
            nse[i]=st.top();
            st.push(i);       
        }
        for(i=0;i<n;i++)
        summin+=(long long)nums[i]*(nse[i]-i)*(i-pse[i]);
        while(!st.empty())
        st.pop();
        for(i=0;i<n;i++){
            while(!st.empty()&& nums[st.top()]<nums[i]){
                st.pop();
            }
            if(st.empty())
            pge[i]=-1;
            else
            pge[i]=st.top();
            st.push(i);       
        }
        while(!st.empty())
        st.pop();
        for(i=n-1;i>=0;i--){
            while(!st.empty()&& nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(st.empty())
            nge[i]=n;
            else
            nge[i]=st.top();
            st.push(i);       
        }
        for(i=0;i<n;i++)
        summax+=(long long)nums[i]*(i-pge[i])*(nge[i]-i);
        return summax-summin;
    }
};