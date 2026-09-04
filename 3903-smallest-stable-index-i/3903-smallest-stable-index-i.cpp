class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> suffix(n);
        suffix[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffix[i]=min(nums[i], suffix[i+1]);
        }
        int prefix=nums[0];
        for(int i=0; i<nums.size(); i++){
            prefix=max(prefix, nums[i]);
            int score=prefix-suffix[i];
            if(score<=k) return i;
        }
        return -1;
    }
};