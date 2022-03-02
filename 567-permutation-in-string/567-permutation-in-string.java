class Solution {
    public boolean checkInclusion(String s1, String s2) {
if(s1.length() > s2.length())
        return false;
      
      int[] s1map = new int[26],s2map = new int[26]; //2 arrays that stores number of occurances of each charater for each string
      int i =0;
      for(i=0;i<s1.length();i++)
      {
        s1map[ s1.charAt(i)-'a' ]++; // checking each occurance of each char in s1
        s2map[ s2.charAt(i)-'a' ]++; // checking each occurance of first nth char in s2 [where n = s1.Length]
      }
      
    //going through each character sequnce of s2 with stepsize of s1.length ex s1[ab] therefore we will go move through each (2) characters in s2 and compare their ocurrances
      
      for(i=0;i< s2.length() - s1.length();i++)
      {  
        if(Arrays.equals(s1map,s2map)) // whenever the number of occurances are identical return true
          return true;
       
          s2map[ s2.charAt(i + s1.length()) -'a']++; //Adds in the next charact's occurances
          s2map[ s2.charAt(i) - 'a']--; //while removing the prev character's occurance [look at description of sliding window algorith]

      }
      return Arrays.equals(s1map,s2map);
    }
  
}