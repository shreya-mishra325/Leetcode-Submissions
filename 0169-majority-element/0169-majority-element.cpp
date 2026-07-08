class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<long long> hash = {0};
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};