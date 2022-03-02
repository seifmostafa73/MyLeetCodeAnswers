class Solution {
    public int maxAreaOfIsland(int[][] grid) {
         //int R=0,C=0;//y,x
      int MaxSize=0;
        for(int y=0;y<grid.length;y++)
        {
          for(int x=0;x<grid[0].length;x++)
          {
            if(grid[y][x] == 1)
            {
              int IslandSize =  recCountIsland(grid,y,x);
              MaxSize = (IslandSize> MaxSize)? IslandSize : MaxSize;
            }
          }
        }
      return MaxSize;
    }
  
  public int recCountIsland(int[][] grid,int sr,int sc)
  {
    if(sr <0 || sc<0 || sr>=grid.length || sc>=grid[0].length || grid[sr][sc] ==0)
      return 0;
    
    int IslandSize =0;
    
      IslandSize++;
      grid[sr][sc] =0;
    
    IslandSize += recCountIsland(grid,sr+1,sc);
    IslandSize += recCountIsland(grid,sr-1,sc);
    IslandSize += recCountIsland(grid,sr,sc+1);
    IslandSize += recCountIsland(grid,sr,sc-1);
    return IslandSize;
  }
}