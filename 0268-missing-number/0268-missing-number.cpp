class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(count!=nums[i]) return count;
            count++;
        }
        return count;
    }
};