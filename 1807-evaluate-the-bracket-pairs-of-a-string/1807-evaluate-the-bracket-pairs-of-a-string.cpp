class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        unordered_map<string, string> mp;
        for(int i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        ans.reserve(s.size());
        for(int i=0; i<s.size(); i++){
            if(s[i]!='('){
                ans+=s[i];
                continue;
            }
            else {
                int j=i+1;
                while(s[j]!=')'){
                    j++;
                }
                string key=s.substr(i+1,j-i-1);
                auto it=mp.find(key);
                if(it!=mp.end()){
                    ans+=it->second;
                }
                else ans+="?";
                i=j;
            }
        }
        return ans;
    }
};