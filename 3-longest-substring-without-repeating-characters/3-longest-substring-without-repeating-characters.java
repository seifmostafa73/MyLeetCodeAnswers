class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> substring = new HashSet<>();
        int MaxSize = 0;
      int a=0,b=0;
     while (b < s.length())
		  {
			if (!substring.contains(s.charAt(b)) ){
				substring.add(s.charAt(b) );
				MaxSize = (MaxSize<substring.size()) ? substring.size(): MaxSize;
        b++;
			}else{
				substring.remove(s.charAt(a) );
				a++;
			}
		}
      MaxSize = (MaxSize < substring.size()) ? substring.size() : MaxSize;
      return MaxSize;
    }
}
