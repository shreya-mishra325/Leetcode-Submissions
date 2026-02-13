class Solution {
public:
    string largestOddNumber(string num) {
        int idx;
        int i;
        for(i = num.size()-1; i>=0; i--){
            if((num[i]-'0')%2==1){
                idx=i;
                break;
            }
        }
        i=0;
        while(i<=idx && num[i]=='0')
         i++;
        return num.substr(i, idx-i+1);
    }
};