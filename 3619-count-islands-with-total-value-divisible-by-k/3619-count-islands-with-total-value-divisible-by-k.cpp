class Solution {
public:
    long long dfs(vector<vector<int>> &grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()) return 0;
        if(grid[i][j]==0) return 0;
        long long n=grid[i][j];
        grid[i][j]=0;
        long long up=dfs(grid, i-1, j);
        long long down=dfs(grid, i+1, j);
        long long right=dfs(grid, i, j+1);
        long long left=dfs(grid, i, j-1);
        return n+up+down+left+right;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]!=0){
                    long long n=dfs(grid, i, j);
                    if(n%k==0) ans++;
                }
            }
        }
        return ans;
    }
};