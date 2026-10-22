class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        for(int i=0; i<n; i++) {
            if(nums[i]==0){
                pos=i;
                break;
            }
        }
        bool inc=true, dec=true;
        for(int i=0; i<n; i++){
            if(nums[(pos+i)%n]!=i) 
                inc=false;
            if(nums[(pos-i+n)%n]!=i)
                dec=false;
        }
        int ans=INT_MAX;
        if(inc) ans=min(ans, min(pos, n-pos+2));
        if(dec) ans=min(ans, 1+min(n-1-pos, pos+1));
        if(ans==INT_MAX) return -1;
        return ans;
    }
};