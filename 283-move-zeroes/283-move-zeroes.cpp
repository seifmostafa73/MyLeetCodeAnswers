class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int j =0;
        for(int i =0;i<nums.size();i++)
        {
          if(nums[i] != 0)
          {
            //Swapping zero with next element until the end of the array
            int Temp = nums[j];
            nums[j] = nums[i];
            nums[i] = Temp;
            j++;
          }
        }  
    }
};
