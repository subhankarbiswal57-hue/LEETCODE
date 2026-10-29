class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i;
        int sum=0;
        for(i=1;i<num;i++){
            if(num%i==0)
            sum+=i;
        }
        if(sum==num){
            return true;
        }
        else 
        return false;
    }
};