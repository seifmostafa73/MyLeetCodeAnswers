public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
      //O(n)
       int Size = numbers.Length;
        int First =0;
        int Last = Size-1;
        int[] Result = new int[2];
        
        while(First<=Last)
        {
            int sum = numbers[First]+numbers[Last];
            if(sum==target)
            {
                Result[0]= First+1;
                Result[1]=Last+1;
                break;
            }
            else if(sum < target)
                First++;
            else
                Last--;
        }
        return Result;
    }
}

/*O(n^2):simplest but exceeds time limit

      int[] Result = new int[2];  
      for(int j =0;j<numbers.Length;j++)
        for(int i=j+1;i<numbers.Length;i++ )
        {
          if(numbers[j]+numbers[i] == target)
          {
            Result[0] = j+1;
            Result[1] = i+1;
          }
        }
      Console.Write(Result);
      return Result;*/