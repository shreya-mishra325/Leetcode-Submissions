class Solution {
public:
    int product(int n){
        int prod=1;
        while(n){
            prod=prod*(n%10);
            n=n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int p=product(n);
        while(p%t!=0){
            n=n+1;
            p=product(n);
        }
        return n;
    }
};