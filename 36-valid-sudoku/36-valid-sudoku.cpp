class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> row[9],col[9]; // we have 9 rows and 9 col each should only have an element once 
        map<char,int> subbox[9];    // we have 9 boxes each should only habe an element once
        
        int  currentbox = 0;
        
        for(int R = 0;R < 9;R++)
        {   
            for(int C = 0;C < 9;C++)
            {   
                if(board[R][C] == '.')
                    continue;
                
                currentbox = getcurrentbox(R,C);
                
                auto it1 = row[R].find(board[R][C]);
                auto it2 = col[C].find(board[R][C]);
                auto it3 = subbox[currentbox].find(board[R][C]);

                if(it1 != row[R].end() || it2 != col[C].end() || it3 != subbox[currentbox].end())
                {
                     return false;                 
                }
                row[R].insert(pair<char,int>(board[R][C],true));
                col[C].insert(pair<char,int>(board[R][C],true));
                subbox[currentbox].insert(pair<char,int>(board[R][C],true));
                
            }
        }
        return true;
    }
    int getcurrentbox(int R,int C)
    {
        int width = 3;
        int nCols = 3;
        int nRows = 3;

        int squareRow = (R) / nRows;
        int squareCol = (C) / nCols;

        int squareNum = (squareRow * width) + squareCol;
        return squareNum;
    }
};