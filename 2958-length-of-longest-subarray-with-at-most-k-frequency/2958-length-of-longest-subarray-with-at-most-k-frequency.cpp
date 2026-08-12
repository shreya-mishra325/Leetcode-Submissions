class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0, ans=0;
        unordered_map<int, int> mpp;
        for(int right=0; right<nums.size(); right++){
            mpp[nums[right]]++;
            while(mpp[nums[right]]>k){
                mpp[nums[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};