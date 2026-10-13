class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b){
            return abs(a)<abs(b);
        });
        long long sum=0;
        for(int i=0; i<nums.size(); i++){
            long long sq=(long long)nums[i]*nums[i];
            if(i<nums.size()/2){
                sum=sum-sq;
            }
            else sum=sum+sq;
        }
        return sum;
    }
};