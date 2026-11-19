class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a=nums[nums.size()-1]-nums[2];
        int b=nums[nums.size()-2]-nums[1];
        int c=nums[nums.size()-3]-nums[0];
        return min({a,b,c});
    }
};