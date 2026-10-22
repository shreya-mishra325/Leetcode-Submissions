class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        if(is_sorted(s.begin(), s.end())) return 0;
        if(n==2) return -1;

        char mn=*min_element(s.begin(), s.end());
        char mx=*max_element(s.begin(), s.end());

        if(s[0]==mn || s[n-1]==mx) return 1;

        int minCount=0, maxCount=0;
        for(int i=0; i<n; i++){
            if(s[i]==mn) minCount++;
            if(s[i]==mx) maxCount++;
        }
        if(s[0]!=mx || s[n-1]!=mn || minCount>1 || maxCount>1) return 2;
        return 3;   
    }
};