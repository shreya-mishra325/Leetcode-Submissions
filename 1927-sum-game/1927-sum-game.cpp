class Solution {
public:
    bool sumGame(string num) {
        int diff=0;
        int L=0, R=0;
        int n=num.size();
        for(int i=0; i<n/2; i++){
            if(num[i]=='?') L++;
            else {
                diff=diff+(num[i]-'0');
            }
        }
        for(int i=n/2; i<n; i++){
            if(num[i]=='?') R++;
            else diff=diff-(num[i]-'0');
        }
        return 2*diff!=9*(R-L);
    }
};