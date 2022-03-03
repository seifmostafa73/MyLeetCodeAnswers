public class Solution {
    public int HammingWeight(uint n) {
if(n ==0) return 0;
      int numberOfOnes =0;
      
      while(n != 0)
        {
        
          if( ( (n) & 1 ) == 1 )
          {
            numberOfOnes ++;
          }
          n= n >>1;
        }
      return numberOfOnes;   
    }
}