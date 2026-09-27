class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int milage=0;
        while(mainTank>0){
            if(mainTank>=5&&additionalTank>0){
                milage+=50;
                mainTank-=5;
                mainTank++;
                additionalTank-=1;
            }
            else{
                milage+=mainTank*10;
                mainTank=0;
            }
        }
        return milage;
    }
};