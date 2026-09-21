class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int i=1;
        for(char ch:s){
            int idx=i;
            int rev=26-(ch-'a');
            int prod=rev*idx;
            sum=sum+prod;
            i++;
        }
        return sum;
    }
};