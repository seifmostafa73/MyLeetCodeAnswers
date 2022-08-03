class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>> newmatrix ;
        int m = mat.size();
        int n = mat[0].size();
        if(mat.size() == 0 || (m==r&&n==c) || (m*n) != (r*c) )
            return mat;
        
        int currentrow=0,currentcol =0;
        vector<int> newrow;
        for(int row =0;row<m;row++)
        {
            for(int col =0;col<n;col++)
            {
                if(currentcol<(c-1) )
                {
                    newrow.push_back(mat[row][col]);
                    currentcol++;
                }
                else
                {
                    newrow.push_back(mat[row][col]);
                    newmatrix.push_back(newrow);
                    newrow.clear();
                    currentcol=0;
                }
            }
           
        }
        return newmatrix;
    }
};