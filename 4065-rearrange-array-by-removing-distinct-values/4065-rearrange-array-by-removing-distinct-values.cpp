class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mpp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        while(!mpp.empty()){
            vector<int> temp;
            for(auto i:mpp){
                ans.push_back(i.first);
                temp.push_back(i.first);
            }
            for(int i=0; i<temp.size(); i++){
                mpp[temp[i]]--;
                if(mpp[temp[i]]==0){
                    mpp.erase(temp[i]);
                }
            }
        }
        return ans;
    }
};