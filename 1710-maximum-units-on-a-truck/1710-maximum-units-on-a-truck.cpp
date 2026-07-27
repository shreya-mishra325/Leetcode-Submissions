class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const auto& a, auto& b){
            return a[1]>b[1];
        });
        int total=0, boxesTaken=0;
        int i=0;
        while(truckSize>0 && i<boxTypes.size()){
            boxesTaken=min(boxTypes[i][0], truckSize);
            total=total+(boxesTaken*boxTypes[i][1]);
            i++;
            truckSize-=boxesTaken;
        }
        return total;
    }
};