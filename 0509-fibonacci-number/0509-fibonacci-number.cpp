class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int ans;
        int curr=1, prev=0;
        for(int i=2; i<=n; i++){
            ans=curr+prev;
            prev=curr;
            curr=ans;
        }  
        return ans;    
    }
};