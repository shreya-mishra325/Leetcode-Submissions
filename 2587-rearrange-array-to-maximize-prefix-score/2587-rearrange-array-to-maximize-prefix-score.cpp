class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum=0;
        int count=0;
        for(int i=nums.size()-1; i>=0; i--){
            if(sum+nums[i]<=0) break;
            sum=sum+nums[i];
            count++;
        }
        return count;
    }
};