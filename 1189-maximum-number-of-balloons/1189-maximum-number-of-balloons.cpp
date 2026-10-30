class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> freq(26, 0);
        for(int i=0; i<text.size(); i++){
            freq[text[i]-'a']++;
        }
        int ans=INT_MAX;
        string s="balloon";
        for(char x:s){
            int f=freq[x-'a'];
            if(x=='l' || x=='o'){
                f=f/2;
            }
            ans=min(ans, f);
        }
        return ans;
    }
};