class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int> ans(n);
        int left=(n+1)/2-1;
        int right=n-1;
        for(int i=0; i<nums.size(); i=i+2){
            ans[i]=nums[left--];
        }
        for(int i=1; i<nums.size(); i=i+2){
            ans[i]=nums[right--];
        }
        nums=ans;
    }
};