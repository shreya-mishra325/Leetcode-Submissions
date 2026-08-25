class Solution {
public:
    void dfs(int city, vector<vector<int>>& isConnected, vector<int>& visited){
        visited[city]=1;
        for(int i=0; i<isConnected.size(); i++){
            if(isConnected[city][i]==1 && !visited[i]){
                dfs(i, isConnected, visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
        vector<int> visited(v,0);

        int count=0;
        for(int i=0; i<v; i++){
            if(!visited[i]){
                count++;
                dfs(i, isConnected, visited);
            }
        }
        return count;
    }
};