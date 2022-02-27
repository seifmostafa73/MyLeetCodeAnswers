class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
     for(int i =0;i<nums.size();i++)
     {
       nums[i] = nums[i] * nums[i];
     }
      QuickSort(nums,0,nums.size()-1);
      return nums;  
    }
      
  
  int Partition(vector<int>& Arr,int FirstIndex,int LastIndex)
{
    int Pivot = (FirstIndex+LastIndex)/2;
    Swap(Arr,FirstIndex,Pivot);
    Pivot = FirstIndex;
    int SmallestIndex=FirstIndex;
    for(int i =FirstIndex+1;i<=LastIndex;i++)
    {
        if(Arr[i]<Arr[Pivot])
        {
            SmallestIndex++;
            Swap(Arr,SmallestIndex,i);
        }        
    }
    Swap(Arr,SmallestIndex,Pivot);
    return SmallestIndex;
}
  
  void QuickSort(vector<int>& Arr,int FirstIndex,int LastIndex)
{
   while (FirstIndex<LastIndex)
    {
        int Mid = Partition(Arr,FirstIndex,LastIndex);
        if(Mid - FirstIndex < LastIndex- Mid)
        {
            QuickSort(Arr,FirstIndex,Mid-1);
            FirstIndex = Mid+1;
        }else
        {
            QuickSort(Arr,Mid+1,LastIndex);
            LastIndex = Mid-1;
        }
    }
}
  void Swap(vector<int>& Arr, int IndexA,int IndexB)
{
    int Temp = Arr[IndexA];
    Arr[IndexA] = Arr[IndexB];
    Arr[IndexB] = Temp;
}
};