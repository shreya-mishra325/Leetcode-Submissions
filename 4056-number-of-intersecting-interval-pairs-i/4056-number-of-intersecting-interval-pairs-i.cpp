class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count=0;
        for(int i=1; i<intervals.size(); i++){
            for(int j=0; j<i; j++){
                if(intervals[i][0]<=intervals[j][1]){
                    count++;
                }
            }
        }
        return count;
    }
};