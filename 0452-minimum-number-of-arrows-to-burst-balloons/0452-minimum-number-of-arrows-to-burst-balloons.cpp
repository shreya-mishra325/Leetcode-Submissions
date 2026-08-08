class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](auto &a, auto &b){
            return a[1]<b[1];
        });
        int arrows=1;
        auto prev=points[0];
        for(int i=1; i<points.size(); i++){
            if(points[i][0]>prev[1]) {
                arrows++;
                prev=points[i];
            }
        }
        return arrows;
    }
};