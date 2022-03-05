public class Solution {
    public int OrangesRotting(int[][] grid) {
        int[] dr = {0,0,1,-1};
        int[] dc = {1,-1,0,0};
        int R,  C;
        int MaxRow = grid.Length;
        int MaxCol = grid[0].Length;
      
        int StepCount =0;
        int FreshT = 0;
        Queue<int[]> RottenQ = new Queue<int[]>();
      
        for(int i =0;i<MaxRow;i++)
          for(int j=0;j<MaxCol;j++)
          {
            if(grid[i][j] == 2)
            {
              RottenQ.Enqueue(new int[] {i,j});
            }
            else if(grid[i][j] ==1)
            {
              FreshT++;
            }
          }
        while(RottenQ.Count>0 && FreshT > 0)
        {
          int CurrentQueueSize = RottenQ.Count;
          for(int k=0;k<CurrentQueueSize;k++){
            int[] CurrentCell = RottenQ.Dequeue();
            for(int i=0;i<dr.Length;i++)
            {
              R = CurrentCell[0] + dr[i];
              C = CurrentCell[1] + dc[i];

              if(R<0||C<0||R>=MaxRow || C>=MaxCol)
                continue;

              if(grid[R][C] == 0 || grid[R][C] == 2)
                continue;

              grid[R][C] =2;
              RottenQ.Enqueue(new int[] {R,C});
              FreshT--;

            }
          }
            StepCount++; 
        }
          
      if(FreshT > 0) return -1;
      return StepCount;
    }
}