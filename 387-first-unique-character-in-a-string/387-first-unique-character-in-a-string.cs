public class Solution {
    public int FirstUniqChar(string s) {
        
        Dictionary<char,int> nonDuplicate = new Dictionary<char,int>();
        
        
        for(int i =0;i<s.Length;i++)
        {
            if(nonDuplicate.ContainsKey(s[i]) == false)
                nonDuplicate.Add(s[i],0);
            
           nonDuplicate[s[i]] ++;
        }
        
        
        for(int j = 0;j<s.Length;j++)
        {
            if(nonDuplicate[s[j]] == 1)
                return j;
        }
        return -1;
        
    }
}