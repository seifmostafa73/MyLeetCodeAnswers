public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        Dictionary<int,bool> duplicationDict = new Dictionary<int,bool>();
        foreach(var num in nums)
        {
           if(duplicationDict.ContainsKey(num)){
               return true;
           }
            duplicationDict.Add(num,true);
        }
        return false;

    }
}