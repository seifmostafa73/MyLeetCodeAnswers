public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        var mostRecentIndex = new Dictionary<int,int>();
        for(int i = 0; i < nums.Length; i++)
        {
            if(mostRecentIndex.ContainsKey(nums[i]) && i - mostRecentIndex[nums[i]] <= k)
            {
                return true;
            }
            mostRecentIndex[nums[i]] = i;
        }
        return false;
    }
}