class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items,int budget){
        int n=items.size();
        int mn=INT_MAX;
        vector<int> cnt(n,1);
        for(int i=0;i<n;i++){
            mn=min(mn,items[i][1]);
            for(int j=0;j<n;j++){
                if(i!=j && items[j][0]%items[i][0]==0){
                    cnt[i]++;
                }
            }
        }
        vector<int> dp(budget+1,0);
        for(int i=0;i<n;i++){
            int p=items[i][1];
            for(int j=budget;j>=p;j--){
                dp[j]=max(dp[j],dp[j-p]+cnt[i]);
            }
        }
        int ans=0;
        for(int i=0;i<=budget;i++){
            ans=max(ans,dp[i]+(budget-i)/mn);
        }
        return ans;
    }
};