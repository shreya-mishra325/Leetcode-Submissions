class Solution {
public:
    int arrangeCoins(int n) {
        int ans=0;
        int cap=1;
        while(n>=cap){
            n=n-cap;
            ans++;
            cap++;
        }
        return ans;
    }
};