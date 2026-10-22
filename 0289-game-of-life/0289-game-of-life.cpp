class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> ans=board;
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                int live=0;
                if(i-1>=0 && board[i-1][j]==1) live++;
                if(i+1<=board.size()-1 && board[i+1][j]==1) live++;
                if(j-1>=0 && board[i][j-1]==1) live++;
                if(j+1<=board[0].size()-1 && board[i][j+1]==1) live++;

                if(i-1>=0 && j-1>=0 && board[i-1][j-1]==1) live++;
                if(i-1>=0 && j+1<board[0].size() && board[i-1][j+1]==1) live++;
                if(i+1<board.size() && j-1>=0 && board[i+1][j-1]==1) live++;
                if(i+1<board.size() && j+1<board[0].size() && board[i+1][j+1]==1) live++;

                if(board[i][j]==1 && live<2) ans[i][j]=0;
                if(board[i][j]==1 && (live==2 || live==3)) ans[i][j]=1;
                if(board[i][j]==1 && live>3) ans[i][j]=0;
                if(board[i][j]==0 && live==3) ans[i][j]=1;
            }
        }
        board=ans;
    }
};