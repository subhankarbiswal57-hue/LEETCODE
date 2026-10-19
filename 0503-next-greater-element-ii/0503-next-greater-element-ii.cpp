class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,j;
        int index=0;
        int cnt;
        vector<int>temp;
        int n=nums.size();
        for (i=0;i<n;i++){
            cnt=0;
            for (j=0;j<n;j++){
            index=(i+j)%n;   
                if(nums[index]>nums[i]){
                    temp.push_back(nums[index]);
                    cnt++;
                    break;
                }
            }
            if(cnt==0){
                temp.push_back(-1);
            }
        }
        return temp;
    }
};