class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int prev=nums[0];
        int ans=1;
        int count=1;
        for(int i=1; i<nums.size(); i++){
            if(prev==nums[i]) continue;
            else if(prev+1!=nums[i]){
                ans=max(ans,count);
                count=1;
            }
            else count++;
            prev=nums[i];
        }
        ans=max(ans, count);
        return ans;
    }
};