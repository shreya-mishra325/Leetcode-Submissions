class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> mpp;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                mpp[5]++;
                continue;
            }
            else if(bills[i]==10) {
                if(mpp[5]!=0) {
                    mpp[10]++;
                    mpp[5]--;
                }
                else return false;
            }
            else {
                if(mpp[5]>=1 && mpp[10]>=1) {
                    mpp[20]++;
                    mpp[10]--;
                    mpp[5]--;
                    
                }
                else if(mpp[5]>=3) {
                    mpp[20]++;
                    mpp[5]=mpp[5]-3;
                }
                else return false;
            }
        }
        return true;  
    }
};