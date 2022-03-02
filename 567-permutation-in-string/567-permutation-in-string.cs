public class Solution {
    public bool CheckInclusion(string s1, string s2) {
      if(s1.Length > s2.Length)
        return false;
      
      int[] s1map = new int[26],s2map = new int[26]; //2 arrays that stores number of occurances of each charater for each string
      int i =0;
      for(i=0;i<s1.Length;i++)
      {
        s1map[ s1[i]-'a' ]++; // checking each occurance of each char in s1
        s2map[ s2[i]-'a' ]++; // checking each occurance of first nth char in s2 [where n = s1.Length]
      }
      
    //going through each character sequnce of s2 with stepsize of s1.length ex s1[ab] therefore we will go move through each (2) characters in s2 and compare their ocurrances
      int StepsCount = s2.Length - s1.Length;
      
      for(i=0;i< StepsCount;i++)
      {  
        if(Enumerable.SequenceEqual(s1map,s2map)) // whenever the number of occurances are identical return true
          return true;
       
          s2map[ s2[i + s1.Length] -'a']++; //Adds in the next charact's occurances
          s2map[ s2[i] - 'a']--; //while removing the prev character's occurance [look at description of sliding window algorith]

      }
      return Enumerable.SequenceEqual(s1map,s2map);
    }
  
}