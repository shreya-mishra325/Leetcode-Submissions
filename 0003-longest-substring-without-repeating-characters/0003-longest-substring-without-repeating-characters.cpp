class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0, len;
        for(int i=0; i<s.size(); i++){
            int hash[256] = {0};
            for(int j=i; j<s.size(); j++){
                if(hash[s[j]]==1) break;
                len = j-i+1;
                ans = max(len, ans);
                hash[s[j]]=1;
            }
        }
        return ans;
    }
};