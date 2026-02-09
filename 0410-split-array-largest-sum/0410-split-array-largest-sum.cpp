class Solution {
public:
    int func(vector<int>& nums, int mid){
        int subarrays = 1;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i]<=mid){
                sum = sum+nums[i];
            }
            else {
                subarrays++;
                sum=nums[i];
            }
        }
        return subarrays;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high) {
            int mid = low+(high-low)/2;
            int numbOfSubarrays = func(nums, mid);
            if(numbOfSubarrays>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};