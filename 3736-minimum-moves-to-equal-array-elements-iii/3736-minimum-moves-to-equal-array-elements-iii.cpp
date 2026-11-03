class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target=nums[nums.size()-1];
        int moves=0;
        for(int i=0; i<nums.size()-1; i++){
            moves=moves+target-nums[i];
        }
        return moves;
    }
};