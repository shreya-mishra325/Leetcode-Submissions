class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int left=0, right=0;
        int ans = 0, len;
        int i=0;
        while(right<s.size()){
            if (mpp.find(s[right]) != mpp.end()){
                if(mpp[s[right]] >= left){
                left=mpp[s[right]]+1;
                }
            }
            len=right-left+1;
            ans=max(ans,len);
            mpp[s[right]] = right;
            right++;       
        }
        return ans;
    }
};