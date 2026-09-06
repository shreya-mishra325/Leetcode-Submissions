class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int j=0;
        long long tot=0, sum1=0, sum2=0;
        for(int i=0; i<n; i++){
            tot=tot+nums[i];
        }
        for(int i=0; i<n/2; i++){
            sum1=sum1+nums[i];
        }
        while(j<n){
            sum2=tot-sum1;
            if(sum1>sum2){
                ans++;
            } 
            sum1=sum1-nums[j];
            sum1=sum1+nums[(j+n/2)%n];
            j++;
        }
        return ans;
    }
};