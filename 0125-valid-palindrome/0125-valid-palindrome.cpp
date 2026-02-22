class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
                ans.push_back(tolower(s[i]));
            }
        }
        std::transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        string rev = "";
        for(int i=ans.size()-1; i>=0; i--){
            rev.push_back(ans[i]);
        }
        if(ans==rev)
        return true;
        else return false;        
    }
};