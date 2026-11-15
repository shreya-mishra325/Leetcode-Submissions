class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            int mini=nums[i];
            int bit=nums[i];
            for(int j=i; j<nums.size(); j++){
                if(nums[j]<mini) mini=nums[j];
                bit=bit&nums[j];
                if(bit==mini) ans++;
            }
        }
        return ans;  
    }
};