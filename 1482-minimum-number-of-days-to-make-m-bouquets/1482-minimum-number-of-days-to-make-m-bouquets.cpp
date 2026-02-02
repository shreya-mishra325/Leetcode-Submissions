class Solution {
public:
    long long max(vector<int>& bloomDay, int n){
        int m=bloomDay[0];
        for(int i=0; i<n; i++){
            if(bloomDay[i]>m)
            m= bloomDay[i];
        }
        return m;
    }
    long long min(vector<int>& bloomDay, int n){
        int m=bloomDay[0];
        for(int i=0; i<n; i++){
            if(bloomDay[i]<m)
            m= bloomDay[i];
        }
        return m;
    }

    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int count=0;
        int numbofbouq = 0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=day){
                count++;       
            } else {
                numbofbouq += count/k;
                count=0;
            }
        }
        numbofbouq += count/k;
        if(numbofbouq>=m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =bloomDay.size();
        long long prod =(long long)m*k;
        if(prod>n)
        return -1;
        int low=min(bloomDay, n); 
        long long high = max(bloomDay, n);
        long long day = high;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(possible(bloomDay, mid, m, k)){
                day=mid;
                high=mid-1;
            }
            else low=mid+1;  
        }
        return day;      
    }
};