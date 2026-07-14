class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> mpp;
        for (int i=0; i<nums2.size(); i++) {
            mpp[nums2[i]]=i;
        }
        for (int i=0; i<nums1.size(); i++) {
            int j = mpp[nums1[i]];
            int nextGreater=-1;
            for (int k=j+1; k<nums2.size(); k++) {
                if (nums2[k]>nums2[j]) {
                    nextGreater=nums2[k];
                    break;
                }
            }
            ans.push_back(nextGreater);
        }
        return ans;
    }
};