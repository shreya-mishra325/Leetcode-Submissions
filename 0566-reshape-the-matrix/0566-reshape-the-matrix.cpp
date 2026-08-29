class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> v;
         if(m * n != r * c)
            return mat;
        for(int i=0; i<r; i++){
            vector<int> temp;
            for(int j=0; j<c; j++){
                int idx=i*c+j;
                int oriRow=idx/n;
                int oriCol=idx%n;
                temp.push_back(mat[oriRow][oriCol]);
            }
            v.push_back(temp);
        }
        return v;
    }
};