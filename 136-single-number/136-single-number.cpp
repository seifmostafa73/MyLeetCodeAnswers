class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ///cool property of XOR : you know that XOR in porbability stands for the "Exclusive" region 
        ///thus 3^2^3 = 2
        // 011^010^011 = 010
        int result = nums[0];
        for(int i=1;i<nums.size();i++)
        {
          result ^= nums[i];
        }
      return result;
    }
}; 