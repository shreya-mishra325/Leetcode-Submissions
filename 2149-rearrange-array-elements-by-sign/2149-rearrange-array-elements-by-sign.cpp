class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr;
        vector<int> brr;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0) brr.push_back(nums[i]);
            else arr.push_back(nums[i]);
        }

        nums.clear();

        for(int i = 0; i < brr.size(); i++){
            nums.push_back(arr[i]);
            nums.push_back(brr[i]);
        }
        return nums;
    }
};