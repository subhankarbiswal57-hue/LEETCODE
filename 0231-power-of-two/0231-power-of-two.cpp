class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i;
        if(n<=0)
        return false;
        while(n%2==0){
            n=n/2;
        }
        if(n==1){
            return true;
        }
        else
        return false;
    }
};