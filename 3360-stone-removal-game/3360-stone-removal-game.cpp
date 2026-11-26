class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        n=n-10;
        bool flag=1;
        int take=9;
        while(n>=take){
            n=n-take;
            flag=!flag;
            take=take-1;
        }
        return flag;
    }
};