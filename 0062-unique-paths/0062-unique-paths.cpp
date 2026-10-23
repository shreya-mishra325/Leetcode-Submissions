class Solution {
public:
    int uniquePaths(int m, int n) {
        int total=(m-1)+(n-1);
        int k=min(m-1, n-1);
        long long paths=1;
        for (int i=1; i<=k; ++i) {
            paths=paths*(total-k+i)/i;
        }
        return paths;
    }
};