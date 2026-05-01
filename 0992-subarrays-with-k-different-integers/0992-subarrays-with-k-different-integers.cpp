class Solution {
public:
    int atmostK(vector<int>& nums, int k){
        unordered_map<int, int> freq;
        int l=0, r=0;
        int ans=0;
        while(r<nums.size()){
            freq[nums[r]]++;
            while(freq.size()>k){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                l++;
            }
            ans= ans + (r-l+1);
            r++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums, k)-atmostK(nums, k-1);
    }
};