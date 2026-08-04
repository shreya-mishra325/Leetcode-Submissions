class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> list;
        sort(nums.begin(), nums.end());
        int count=nums[0];
        for(int x:nums){
            while(count<x) {
                list.push_back(count);
                count++;
            }
            count=x+1;
        }
        return list;
    }
};