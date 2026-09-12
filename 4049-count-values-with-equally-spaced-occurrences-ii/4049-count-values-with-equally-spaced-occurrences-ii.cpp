class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto x:mpp){
            vector<int> v=x.second;
            if(v.size()<3) continue;
            int gap=v[1]-v[0];
            bool flag=true;
            for(int i=2; i<v.size(); i++){
                if(v[i]-v[i-1]!=gap){
                    flag=false;
                    break;
                }
            }
            if(flag) ans++;
        }
        return ans;
    }
};