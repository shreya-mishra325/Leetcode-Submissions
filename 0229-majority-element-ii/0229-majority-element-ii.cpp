class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size()/3;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(find(ans.begin(), ans.end(), nums[i]) == ans.end() && mpp[nums[i]]>n) 
            ans.push_back(nums[i]);
        }
        return ans;
    }
};