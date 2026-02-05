class Solution {
public:
    int max(vector<int>& weights, int n){
        int m=weights[0];
        for(int i=1; i<n; i++){
            if(weights[i]>m)
            m=weights[i];
        }
        return m;
    }
    int totDays(vector<int>& weights, int cap, int n){
        int load=0, day=1;
        for(int i=0; i<n; i++){
            if(load+weights[i]<=cap){
                load = load+weights[i];
            }
            else{
                day=day+1;
                load=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int minC = max(weights, n);
        int sum=0;
        for(int i=0; i<n;i++){
            sum = sum+weights[i];
        }
        int maxC = sum;
        int cap=maxC;
        while(minC<=maxC){
           int mid = (minC+maxC)/2;
           int reqDays = totDays(weights, mid, n);
           if(reqDays<=days){
           cap=mid;
           maxC=mid-1;
        } else minC=mid+1;
        }
        return cap;  
    }
};