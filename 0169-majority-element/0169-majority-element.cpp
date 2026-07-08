class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int a = nums.size()/2;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(mpp[nums[i]]>a) return nums[i];
        }
        return 0;   
    }
};