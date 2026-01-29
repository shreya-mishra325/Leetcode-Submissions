class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return x;
        int low=1, high=x;
        int ans=1;
        while(low<=high){
            long long mid = ((long long)low + high) / 2;  //or low+(high-low)/2 to avoid any overflow
            if((long long)mid*mid<=x){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
    }
};