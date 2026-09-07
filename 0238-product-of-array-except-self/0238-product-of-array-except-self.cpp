class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        int zero=0;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zero++;
                continue;
            }
            prod=prod*nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            if(zero>=2) v.push_back(0);
            else if(nums[i]==0) v.push_back(prod);
            else if(zero==1) v.push_back(0);
            else v.push_back(prod/nums[i]);
        }
        return v;
    }
};