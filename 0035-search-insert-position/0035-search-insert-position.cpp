class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int pos;
        int n=nums.size();
        if(target<nums[0]){
            return 0;
        }
        if(target==nums[n-1]){
            return n-1;
        }
        while(i<n-1){
            if(nums[i]==target){
                pos=i;
                return pos;
            }
            else if(target>nums[i]&&target<=nums[i+1]&&i<n-1){
                pos=i+1;
                return pos;
            }
            i++;
        }
        return n;
    }
};