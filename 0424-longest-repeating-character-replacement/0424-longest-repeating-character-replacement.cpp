class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, r=0, len;
        int ans=0;
        vector<int> freq(26,0);
        int maxFreq=0;
        while(r<s.size()){
            freq[s[r]-'A']++;
            maxFreq = max(maxFreq, freq[s[r]-'A']);
            while((r-l+1)-maxFreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};