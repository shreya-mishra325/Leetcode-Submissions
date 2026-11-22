class Solution {
public:
    long long minCost(vector<int>& nums) {
        long long ans=LLONG_MAX;
        bool flag=true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[0]) flag=false;
        }
        if(flag) return 0;
        int right=0;
        for(int i=0; i<nums.size(); i=right+1){
            int left=i;
            right=i;
            while(right<nums.size()-1 && nums[right+1]==nums[i]){
                right++;
            }
            if(left<=nums.size()-2 && right>=1){
            long long cost=1LL*(nums.size()-(right-left+1))*nums[i];
            ans=min(ans,cost);
            }
        }
        return ans;
    }
};