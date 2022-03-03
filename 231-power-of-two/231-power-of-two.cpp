class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==1) return true;
      
      if(n <=0 || n%2 !=0) return false;
      
      
      
      bool Temp = ((n & 1) == 0)? 0:1 ;
      int oneIndex = (Temp==1)? 0:1;
      while(n != 0)
        {
          if(Temp == 0)
          {
            Temp = ( ( (n >> oneIndex) & 1 ) == 0)? 0:1 ;
            std::cout<<Temp<<"\t";
            oneIndex ++;
          }else
          {
            n &= ~(1 << oneIndex-1);
            std::cout<<"the "<< oneIndex <<" bit is one , the number after reseting it is :"<<n <<endl;
            break;
          }
        }
        std::cout<<endl;
        if(n == 0)
        {
          return true;
        }
        return false;
  }
};