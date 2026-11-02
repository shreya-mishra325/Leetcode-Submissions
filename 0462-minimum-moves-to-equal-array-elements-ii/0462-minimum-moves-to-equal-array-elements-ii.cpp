class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int mini=0;
        int median;
        median=nums[n/2];
        for(int i=0; i<nums.size(); i++){
            mini=mini+abs(nums[i]-median);
        }
        return mini;
    }
};