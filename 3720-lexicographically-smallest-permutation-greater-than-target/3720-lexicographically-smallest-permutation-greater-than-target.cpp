class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        string ans="";
        vector<int> freq(26,0);
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
        }
        for(int i=0; i<target.size(); i++){
            int x=target[i]-'a';
            if(freq[x]>0){
                ans=ans+target[i];
                freq[x]--;
            }
            else {
                for(int j=x+1; j<26; j++){
                    if(freq[j]>0){
                        ans+=char('a'+j);
                        freq[j]--;

                        for(int k=0; k<26; k++)
                        ans=ans+string(freq[k], 'a'+k);
                        return ans;
                    }
                }
                break;
            }
        }
        for(int i=ans.size()-1; i>=0; i--){
            freq[ans[i]-'a']++;
            int x=target[i]-'a';
            for(int j=x+1; j<26; j++){
                if(freq[j]>0){
                    string res=ans.substr(0,i);
                    res+=char('a'+j);
                    freq[j]--;

                    for(int k=0; k<26; k++)
                    res+=string(freq[k], 'a'+k);
                    return res;
                }
            }
        }
        return "";
    }
};