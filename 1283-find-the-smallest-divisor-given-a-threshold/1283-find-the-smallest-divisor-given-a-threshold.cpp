class Solution {
public:
    int check(vector<int>& nums, int d, int n){
        int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+(nums[i]+d-1)/d;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1, high=*max_element(nums.begin(), nums.end());
        int divisor=high;
        int n=nums.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums, mid, n)<=threshold){
                divisor =mid;
                high=mid-1;
            } else low=mid+1;
        }
        return divisor;
    }
};