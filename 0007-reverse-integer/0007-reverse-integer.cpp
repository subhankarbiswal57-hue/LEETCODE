class Solution {
public:
    int reverse(int x) {
        int newnum=0,rem;
        while (x!=0)
        {
            rem=x%10;
            if(newnum>INT_MAX/10||newnum<INT_MIN/10)
            return 0;
            newnum=newnum*10+rem;
            x/=10;
        }
        return newnum;
    }
};