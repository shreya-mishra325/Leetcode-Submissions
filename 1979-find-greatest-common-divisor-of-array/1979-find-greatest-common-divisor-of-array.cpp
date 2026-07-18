class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        int smallest=nums[0];
        int greatest=nums[nums.size()-1];
        for(int i=1; i<=smallest; i++){
            if(greatest%i==0 && smallest%i==0) ans=i;
        }
        return ans;
    }
};