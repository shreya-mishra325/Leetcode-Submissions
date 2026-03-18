class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum=0;
        int maxi = INT_MIN;
        for(long long i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};