class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        long double b=x;
        while(p<0){
            b=1/b;
            p=-p;
        }
        double ans =1;
        while(p>0){
            if(p%2==1){
                ans=ans*b;
            }
            b*=b;
            p=p/2;
        }
        return ans;
    }
};