public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        var numberIndecies = new Dictionary<int,List<int>>();
        for(int i =0;i<nums.Length;i++)
        {
            if(numberIndecies.ContainsKey(nums[i]))
            {   
                foreach(var index in numberIndecies[nums[i]])
                    if(Math.Abs(index-i)<=k)
                        return true;
            }
            else{
                numberIndecies.Add(nums[i],new List<int> {i});
            }
            numberIndecies[nums[i]].Add(i);
        }
        return false;
    }
}