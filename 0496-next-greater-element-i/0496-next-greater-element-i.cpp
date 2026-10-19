class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
        int cnt;
        int n=nums1.size();
        int m=nums2.size();
        int index;
        vector<int>temp;
        for(i=0;i<n;i++){
            index=-1;
            for(j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    index=j;
                    break;
                }
            }
            cnt=0;
            for(j=index+1;j<m;j++){
                if(nums2[j]>nums1[i]){
                    temp.push_back(nums2[j]);
                    cnt++;
                    break;
                }
            }
            if(cnt==0)
            temp.push_back(-1);
        }
        return temp;
    }
};