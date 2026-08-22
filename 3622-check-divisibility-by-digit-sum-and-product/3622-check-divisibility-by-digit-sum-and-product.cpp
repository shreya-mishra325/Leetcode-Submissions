class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int num=n;
        int num2=n;
        while(num){
            s=s+num%10;
            num=num/10;
        }
        while(num2){
            p=p*(num2%10);
            num2=num2/10;
        }
        if(n%(s+p)==0) return true;
        return false;
    }
};