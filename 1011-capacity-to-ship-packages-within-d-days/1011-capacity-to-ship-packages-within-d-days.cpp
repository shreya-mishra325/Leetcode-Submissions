class Solution {
public:
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
        int minC = *max_element(weights.begin(), weights.end());
        int maxC = accumulate(weights.begin(), weights.end(), 0);
        while(minC<=maxC){
           int mid = (minC+maxC)/2;
           int reqDays = totDays(weights, mid, n);
           if(reqDays<=days){
           maxC=mid-1;
        } else minC=mid+1;
        }
        return minC;  
    }
};