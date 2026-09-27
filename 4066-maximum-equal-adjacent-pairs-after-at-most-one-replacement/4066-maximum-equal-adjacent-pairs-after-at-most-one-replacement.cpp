class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        map<pair<int, int>, int> mpp;
        int ans=0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                ans++;
            }
            else{
                int x1=min(nums[i], nums[i+1]);
                int x2=max(nums[i], nums[i+1]);
                mpp[{x1,x2}]++;
            }
        }
        int maxi=0;
        for(auto i:mpp){
            maxi=max(maxi, i.second);
        }
        return ans+maxi;
    }
};