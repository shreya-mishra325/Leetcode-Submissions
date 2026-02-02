class Solution {
public:
    long long max(vector<int>& piles){
        long long m=piles[0];
        for(int i=0; i<piles.size(); i++){
            if(piles[i]>m){
                m=piles[i];
            }
        }
        return m;    
    }
    long long time(vector<int>& arr, long long int k){
        long long sum=0;
        for(int i=0; i<arr.size(); i++) {
            sum=sum+(arr[i]+k-1)/k;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1;
        long long high = max(piles);
        long long k=high;
        long long reqTime;
        while(low<=high) {
            long long mid=low+(high-low)/2;
            reqTime = time(piles, mid);
            if(reqTime<=h){
                k=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return k;
};
};