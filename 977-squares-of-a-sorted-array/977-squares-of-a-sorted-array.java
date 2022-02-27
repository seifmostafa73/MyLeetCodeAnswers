class Solution {
    public int[] sortedSquares(int[] nums) {
     for(int i =0;i<nums.length;i++)
     {
       nums[i] = nums[i] * nums[i];
     }
      QuickSort(nums,0,nums.length-1);
      return nums;
      
    }
  
  int Partition(int[] Arr,int FirstIndex,int LastIndex)
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
  
  void QuickSort(int[] Arr,int FirstIndex,int LastIndex)
{
    if(FirstIndex >= LastIndex) {return;}

    int Middle = Partition(Arr,FirstIndex,LastIndex);
    QuickSort(Arr,FirstIndex,Middle-1);
    QuickSort(Arr,Middle+1,LastIndex);
}
  void Swap(int[] Arr, int IndexA,int IndexB)
{
    int Temp = Arr[IndexA];
    Arr[IndexA] = Arr[IndexB];
    Arr[IndexB] = Temp;
}
}