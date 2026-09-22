class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        vector<int>temp(st.begin(),st.end());
        sort(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        if(temp==nums)
        return false;
        else
        return true;
    }
};