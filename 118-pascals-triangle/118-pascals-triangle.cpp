class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        int rowelements = 3;
        vector<int> row;
        row.assign(1,1);
        triangle.push_back(row);
        row.clear();
        if(numRows ==1)
            return triangle;
        
        row.assign(2,1);
        triangle.push_back(row);
        row.clear();
        for(int R = 2;R<numRows;R++)
        {
            row.push_back(1);
            for(int C = 1;C < (rowelements-1) ;C++)
            {
                row.push_back(triangle[R-1][C]+triangle[R-1][C-1]);
            }
            row.push_back(1);
            triangle.push_back(row);
            row.clear();
            rowelements++;
        }
        return triangle;
    }
};