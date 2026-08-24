class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        bool isprime[n];
        memset(isprime, true, n);

        int result=n/2;
        for(int i=3; i*i<n; i=i+2){
            if(isprime[i]){
                int d=2*i;
                for(int j=i*i; j<n; j=j+d){
                    if(isprime[j]){
                        isprime[j]=false;
                        result--;
                    }
                }
            }
        }
        return result;
    }
};