public class Solution {
    public bool IsPowerOfTwo(int n) {
         if(n==1) return true;
      
      if(n <=0 || n%2 !=0) return false;
      
      bool Temp = ((n & 1) == 0)? false:true ;
      int oneIndex = (Temp == true)? 0:1;
      while(n != 0)
        {
          if(Temp == false)
          {
            Temp = ( ( (n >> oneIndex) & 1 ) == 0)? false:true;
            oneIndex ++;
          }else
          {
            n &= ~(1 << oneIndex-1);
            break;
          }
        }
      
        if(n == 0)
        {
          return true;
        }
        return false;
    }
}