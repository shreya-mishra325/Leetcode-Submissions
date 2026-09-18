class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size()-1; i++){
            int sum=nums[i]+nums[i+1];
            if(mpp[sum]>0) return true;
            mpp[sum]++;
        }
        return false;
    }
};