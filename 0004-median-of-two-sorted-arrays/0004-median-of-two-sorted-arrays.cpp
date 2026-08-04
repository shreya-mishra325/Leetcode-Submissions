class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        vector<int> fresh;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                fresh.push_back(nums2[j]);
                j++;
            }
            else {
                fresh.push_back(nums1[i]);
                i++;
            }
        }
        while(i<nums1.size()) fresh.push_back(nums1[i++]);
        while(j<nums2.size()) fresh.push_back(nums2[j++]);
        int n=fresh.size();
        if(n%2==0) {
            return (fresh[n/2-1]+fresh[n/2])/2.0;
        }
        else return fresh[n/2];
    }
};