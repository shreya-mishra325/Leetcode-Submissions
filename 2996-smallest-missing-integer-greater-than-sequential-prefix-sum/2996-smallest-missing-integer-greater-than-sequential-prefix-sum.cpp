class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1) return nums[0]+1;
        int sum=nums[0];
        int i;
        for(i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]+1) break;
            sum=sum+nums[i];
        }
        unordered_set<int> s(nums.begin(), nums.end());
        while(s.count(sum)){
            sum++;
        }
        return sum;
    }
};