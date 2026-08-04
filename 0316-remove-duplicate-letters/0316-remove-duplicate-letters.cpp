class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26);
        vector<bool> vis(26, false);

        for(int i=0; i<s.size(); i++){
            last[s[i]-'a']=i;
        }
        string ans="";
        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            if(vis[ch-'a']) continue;
            while(!ans.empty() && ans.back()>ch && last[ans.back() - 'a']>i){
                vis[ans.back()-'a']=false;
                ans.pop_back();
            }
            ans.push_back(ch);
            vis[ch-'a']=true;
        }
        return ans;
    }
};