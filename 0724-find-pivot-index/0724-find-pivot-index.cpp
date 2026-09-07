class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0, left=0;
        for(int i=0; i<nums.size(); i++){
            total=total+nums[i];
        }
        for(int i=0; i<=nums.size()-1; i++){
            int right=total-left-nums[i];
            if(left==right) return i;
            left=left+nums[i];
        }
        return -1;
    }
};