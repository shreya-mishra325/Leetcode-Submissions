class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mpp;
        int r=0, l=0;
        int ans=0;
        while(r<fruits.size()){
            mpp[fruits[r]]++;
            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0)
                    mpp.erase(fruits[l]);
                l++;
            }  
            ans = max(ans, r-l+1); 
            r++;
        }
        return ans;
    }
};