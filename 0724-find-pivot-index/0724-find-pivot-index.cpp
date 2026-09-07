class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans;
        vector<int> prefix;
        int sum=0, right=0;
        for(int i=0; i<nums.size(); i++){
            prefix.push_back(sum);
            sum=sum+nums[i];
        }
        int total=sum;
        for(int i=0; i<=nums.size()-1; i++){
            int right=total-prefix[i]-nums[i];
            if(prefix[i]==right) return i;
        }
        return -1;
    }
};