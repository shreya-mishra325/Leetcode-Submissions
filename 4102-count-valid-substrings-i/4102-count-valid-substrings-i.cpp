class Solution {
public:
    long long countValidSubstrings(string s) {
        long long count=0;
        int l=0;
        for(int r=0; r<s.size(); r++){
            if(r>=2 && s[r-2]=='a'&& s[r-1]=='b'&& s[r]=='c'){
                l=r-1;
            }
            count=count+(r-l+1);
        }
        return count;
    }
};