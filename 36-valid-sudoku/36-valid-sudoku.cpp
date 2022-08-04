class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> row[9],col[9]; // we have 9 rows and 9 col each should only have an element once 
        map<char,int> subbox[9];    // we have 9 boxes each should only habe an element once
        
        int  currentbox = 0; //we will calculate the current box given a row and col 
        
        for(int R = 0;R < 9;R++) 
        {   
            for(int C = 0;C < 9;C++)
            {   
                char currentchar = board[R][C];
                if(currentchar == '.') // skipping unneccessary chars
                    continue;
                
                currentbox = getcurrentbox(R,C);
                
                auto it1 = row[R].find(currentchar); // checking if we find the current character in the current row
                auto it2 = col[C].find(currentchar); // ...... col
                auto it3 = subbox[currentbox].find(currentchar); // .....box

                if(it1 != row[R].end() || it2 != col[C].end() || it3 != subbox[currentbox].end())
                {
                     return false;                 
                } 
                //if we reached here that means we couldn't find the current char , so add it.
                row[R].insert(pair<char,int>(currentchar,true));
                col[C].insert(pair<char,int>(currentchar,true));
                subbox[currentbox].insert(pair<char,int>(currentchar,true));
                
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