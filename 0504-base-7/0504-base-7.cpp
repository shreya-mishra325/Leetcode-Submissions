class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool neg=false;
        if(num<0){
            neg=true;
            num=abs(num);
        }
        string ans="";
        while(num){
            int rem=num%7;
            string n=to_string(rem);
            ans=ans+n;
            num=num/7;
        }
        reverse(ans.begin(),ans.end());
        if(neg) ans="-"+ans;
        return ans;
    }
};