public class Solution {
      public int[] TwoSum(int[] nums, int target) {
        var dict = new Dictionary<int,int>();
        for(int i =0;i<nums.Length;i++)
        {
            var numCompliment = target - nums[i];
            if(dict.ContainsKey(numCompliment))
            {
                return new int[]{i,dict[numCompliment]};
            }
            if (!dict.ContainsKey(nums[i]))
                dict.Add(nums[i],i);
        }
        return null;
    }
}