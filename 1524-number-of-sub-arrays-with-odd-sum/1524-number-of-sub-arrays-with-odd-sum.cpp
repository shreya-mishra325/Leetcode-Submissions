class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD=1e9+7;
        int sum=0, odd=00, even=1, ans=0;
        for(int i=0; i<arr.size(); i++){
            sum=(sum+arr[i])%2;
            if(sum==0){
                ans=(ans+odd)%MOD;
                even++;
            }
            else {
                ans=(ans+even)%MOD;
                odd++;
            }
        }
        return ans;  
    }
};