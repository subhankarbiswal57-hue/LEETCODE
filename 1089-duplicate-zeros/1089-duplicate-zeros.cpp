class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp;
        int i;
        int n=arr.size();
        for(i=0;i<n;i++){
            if(arr[i]==0){
                temp.push_back(0);
                temp.push_back(0);
            }
            else{
                temp.push_back(arr[i]);
            }
        }
        for(i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
};