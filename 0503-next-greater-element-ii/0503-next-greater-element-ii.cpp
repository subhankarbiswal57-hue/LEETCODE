class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,j,index;
        int n=nums.size();
        int cnt=0;
        vector<int>nge;
        for(i=0;i<n;i++){
            cnt=0;
            for(j=i+1;j<i+n;j++){
                index=j%n;
                if(nums[index]>nums[i]){
                    nge.push_back(nums[index]);
                    cnt++;
                    break;
                }           
            }
            if(cnt==0)
            nge.push_back(-1);
        }
        return nge;
    }
};