class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> v;
        for(int i=0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            if(st.find(nums2[i]) != st.end())
            v.push_back(nums2[i]);
            st.erase(nums2[i]);
        }
        return v;
    }
};