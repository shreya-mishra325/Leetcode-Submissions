class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        long long ans=0;
        vector<int> vec;
        for(int i=0; i<nums.size(); i++){
            int left=0, right=vec.size();
            while(left<right){
                int mid=left+(right-left)/2;
                if(vec[mid]<nums[i]){
                    left=mid+1;
                }
                else right=mid;
            }
            ans=ans+left;
            while(!vec.empty() && vec.back()>nums[i]){
                vec.pop_back();
            }
            vec.push_back(nums[i]);
        }
        return ans;
    }
};