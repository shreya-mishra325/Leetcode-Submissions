class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mpp;
        vector<int> nums=arr;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int rank=1;
        for(int i=0; i<arr.size(); i++){
            if (i == 0 || nums[i] != nums[i - 1]) {
                mpp[nums[i]] = rank;
                rank++;
            }
        }
        for(int i=0; i<arr.size(); i++){
            ans.push_back(mpp[arr[i]]);
        }
        return ans;
    }
};