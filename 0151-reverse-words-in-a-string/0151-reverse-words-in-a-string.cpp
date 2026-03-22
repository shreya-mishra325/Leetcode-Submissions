class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i;
        i=s.size()-1;
        while(i>=0){
            while(i>=0 && s[i]==' ') i--;
            if(i<0) break;

            string word="";
            while(i>=0 && s[i]!=' '){
                word=s[i]+word;
                i--;
            }
            if(!ans.empty()) ans+=" ";
            ans+=word;
        }
        return ans;
    }
};