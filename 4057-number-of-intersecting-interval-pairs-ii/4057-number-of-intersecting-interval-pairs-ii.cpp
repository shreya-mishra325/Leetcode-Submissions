class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<int> endpts;
        long long ans=0;
        vector<int> strtpts;
        for(int i=0; i<intervals.size(); i++){
            strtpts.push_back(intervals[i][0]);
            endpts.push_back(intervals[i][1]);
        }
        sort(strtpts.begin(), strtpts.end());
        sort(endpts.begin(), endpts.end());
        int j=0;
        for(int i=0; i<strtpts.size(); i++){
            while(j<endpts.size() && endpts[j]<strtpts[i]){
                j++;
            }
            ans=ans+(i-j);
        }
        return ans;
    }
};