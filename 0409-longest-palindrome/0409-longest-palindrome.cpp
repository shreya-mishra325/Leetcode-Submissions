class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        int count=0;
        bool odd=false;
        vector<int> hash(256, 0);
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        for(int j=0; j<hash.size(); j++){
            count=count+(hash[j]/2)*2;
            if(hash[j]%2==1) odd=true;
        }
        if(odd) count++;
        return count;
    }
};