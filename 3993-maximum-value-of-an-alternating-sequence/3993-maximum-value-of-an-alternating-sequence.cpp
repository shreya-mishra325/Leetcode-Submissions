class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if (n == 1) return s;
        long long upMoves = n / 2;
        return 1LL * s + upMoves * (m - 1) + 1;
    }
};