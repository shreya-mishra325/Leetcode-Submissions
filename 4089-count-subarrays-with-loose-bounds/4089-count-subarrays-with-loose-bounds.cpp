class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int l=0;
        long long count=0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r]<minK || nums[r]>maxK){
                l=r+1;
            }
            count=count+r-l+1;
        }
        return count;
    }
};