class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len, ans=0;
        int left=0, right=0, zeros=0;
        while(right<nums.size()){
            if(nums[right]==0) zeros++;
            while(zeros>k){
                if(nums[left]==0) zeros--;
                left++;
            }
            if(zeros<=k){
                len=right-left+1;
                ans = max(len,ans);
            }
            right++;
        }
        return ans;
    }
};