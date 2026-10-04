class Solution {
public:
    int minRotations(string s) {
        int curr=0;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            int target=s[i]-'0';
            int diff=abs(curr-target);
            ans=ans+min(diff, 10-diff);
            curr=target;
        }
        return ans;
    }
};