class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        int n1=num1.size();
        int n2=num2.size();
        vector<int> res(n1+n2, 0);
        for(int i=n1-1; i>=0; i--){
            for(int j=n2-1; j>=0; j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int pos=i+j+1;
                res[pos]=res[pos]+mul;
                res[pos-1]=res[pos-1]+res[pos]/10;
                res[pos]=res[pos]%10;
            }
        }
        string ans="";
        for(int i=0; i<res.size(); i++){
            if(ans.empty() && res[i]==0) continue;
            ans=ans+char(res[i]+'0');
        }
        return ans;
    }
};