class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long a=(long long)need1*cost1+(long long)need2*cost2;
        int k=min(need1, need2);
        long long b=(long long)k*costBoth+(long long)(need1-k)*cost1+(long long)(need2-k)*cost2;
        long long c=max(need1,need2)*(long long)costBoth;
        return min({a,b,c});
    }
};