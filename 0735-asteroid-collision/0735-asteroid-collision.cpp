class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>arr;
        int i;
        int n=asteroids.size();
        for(i=0;i<n;i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty()&& abs(asteroids[i])>st.top()&& st.top()>0){
                    st.pop();
                }
                if(!st.empty()&& abs(asteroids[i])==st.top()&& st.top()>0){
                    st.pop();
                }
                else if(st.empty()||st.top()<0){
                    st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};