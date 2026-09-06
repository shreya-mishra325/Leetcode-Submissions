class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int j=1, score=0;
            string naya;
            if(i!=0){
                naya=s.substr(i)+s.substr(0,i);
            } else {
                naya=s;
            }
            while(j<n){
                if(naya[j]==naya[j-1]){
                    score++;
                }
                j++;
            }
            if(score==k){
                ans++;
            }
        }
        return ans;
    }
};