class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
              //O(n)
       int Size = numbers.size();
        int First =0;
        int Last = Size-1;
        vector<int> Result(2);
        
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
};