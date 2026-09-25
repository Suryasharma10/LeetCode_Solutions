class Solution {
public:
    bool isSameAfterReversals(int num) {
        int x=num;
        int y=0;
        while(x>0){
            y=(y*10)+x%10;
            x/=10;
        }
        cout<<y;
        x=0;
        while(y>0){
            x=(x*10)+y%10;
            y/=10;
        }
        return num==x;
    }
};