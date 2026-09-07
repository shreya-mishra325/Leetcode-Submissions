class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        int left=1, right=1;
        for(int i=0; i<nums.size(); i++){
            prefix.push_back(left);
            left=left*nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            prefix[i]=prefix[i]*right; 
            right=right*nums[i];
        }
        return prefix;
    }; 
};