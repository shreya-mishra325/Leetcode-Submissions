class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int threshold=1000;
        while(n>=threshold){
            count+=(n-threshold+1);
            threshold*=1000;
        }
        return count;
    }
};