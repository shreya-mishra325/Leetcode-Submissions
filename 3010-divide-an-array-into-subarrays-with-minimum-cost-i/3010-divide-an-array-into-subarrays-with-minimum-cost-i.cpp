class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first=nums[0];
        int smallest=INT_MAX;
        int second=INT_MAX;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<smallest){
                second=smallest;
                smallest=nums[i];
            }
            else if(nums[i]<second){
                second=nums[i];
            }
        }
        return first+smallest+second;
    }
};