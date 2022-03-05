class Solution {
public:
 
  
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      int dr[]= {0,0,1,-1};
      int dc[] = {1,-1,0,0};
      int row = mat.size();
      int col = mat[0].size();
      vector<vector<int>> resultMatrix( row , vector<int> (col, -1));
      queue<vector<int>> Queue;
      
      
      for(int i =0;i<row;i++)
      {
        for(int j =0;j<col;j++)
        {
          if(mat[i][j] == 0)
          {
            resultMatrix[i][j] = 0;
            Queue.push({j,i,0});
          }
        }
      }
      
      while(!Queue.empty())
      {
            vector<int> CurrentCell = Queue.front();
            Queue.pop();
            
            //go through the neighbours
            for(int i =0;i<4;i++){
              
                int x = CurrentCell[0] + dr[i];
                int y= CurrentCell[1] + dc[i];
                
                //if coordinates index is not a valid index
                if(x<0 || y<0 || x>=col || y>=row )
                    continue;
                
                if(resultMatrix[y][x] == -1 ){
                    resultMatrix[y][x] = CurrentCell[2]+1;
                    Queue.push({x,y,CurrentCell[2]+1});
                } 
            }    
      }
        return resultMatrix;
    }
};