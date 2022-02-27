class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int Size = nums.size();
      vector<int> TempArr(Size);
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
};