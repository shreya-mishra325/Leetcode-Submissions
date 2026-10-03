class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s = countAndSay(n-1);
        string ans="";
        int i=0;
        while(i<s.size()){
            int count=1;
            while(i+1<s.size() && s[i]==s[i+1]){
                count++;
                i++;
            }
            ans=ans+to_string(count);
            ans=ans+s[i];
            i++;
        }
        return ans;
    }
};