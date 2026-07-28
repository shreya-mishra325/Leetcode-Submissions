class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curr=0;
        int i=0;
        while(i<nums.size()){
            if(i>curr) return false;
            curr=max(curr,i+nums[i]);
            i++;
        }
        return true;
    }
};