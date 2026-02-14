class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
            char a = s[i];
            char b = t[i];
            for(int j=1; j<s.size(); j++){
                if(s[j]==a && t[j]!=b){
                return false;
                }
                if(s[j]!=a && t[j]==b){
                return false;
                }
            }
        }
        return true;        
    }
};