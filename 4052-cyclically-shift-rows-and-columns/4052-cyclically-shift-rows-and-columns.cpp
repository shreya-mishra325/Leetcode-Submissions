class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0; i<n; i++){
            vector<int> v=grid[i];
            int k=rowShift[i]%n;
            for(int j=0; j<n; j++){
                grid[i][(j-k+n)%n]=v[j];
            }
        }
        
        vector<vector<int>> t=grid;
        for(int j=0; j<n; j++){
            int k=colShift[j]%n;
            for(int i=0; i<n; i++){
                grid[(i-k+n)%n][j]=t[i][j];
            }
        }
        return grid;
    }
};