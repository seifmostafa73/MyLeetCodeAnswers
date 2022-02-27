class Solution {
    public void rotate(int[] nums, int k) {
        int Size = nums.length;
      int[] TempArr = new int[Size];
      int Temp;
      int j ;
        for(int i =0;i<(Size);i++)
        {
          j= (i+k)% Size;
          TempArr[j] = nums[i];
        }
       for(int i =0;i<(Size);i++)
        {
          nums[i] = TempArr[i];
        }
    }
}