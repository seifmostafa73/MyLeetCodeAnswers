class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int maxRow = matrix.size();
        int maxCol = matrix[0].size();
        
        if(target > matrix[maxRow-1][maxCol-1] || target < matrix[0][0] )
        {
            return false;
        }
        
        for(int R =0;R<maxRow;R++)
        {
            if(target<= matrix[R][maxCol-1] && target >= matrix[R][0]) //check current floor
            {
                return binarySearch(matrix[R],target,maxCol-1);
            }
        }
        return false;
    }
    bool binarySearch(vector<int> matrix, int target , int end)
    {
        int start = 0;
        int tempend = end;
        int middle ;
        while(start >-1 && tempend<=end && start <= tempend)
        {
            middle = (start+tempend) / 2;
            if(target >matrix[middle])
                start = middle+1;
            else if(target < matrix[middle])
                tempend = middle-1;
            else
                return true;
        }
        return false;
    }
};