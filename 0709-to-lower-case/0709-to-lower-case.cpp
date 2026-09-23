class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(int i=0; i<s.size(); i++){
            char n=tolower(s[i]);
            ans=ans+n;
        }
        return ans;
    }
};