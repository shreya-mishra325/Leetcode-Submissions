class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int count=0;
        if(nums.size()==1) return 1;
        for(int i=1; i<nums.size()-1; i++){
            if(2*nums[i]>=nums[i-1]+nums[i+1]) count++;
        }
        if(nums[0]>=nums[1]) count++;
        if(nums[nums.size()-1]>=nums[nums.size()-2]) count++;
        return count;
    }
};