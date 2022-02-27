class Solution {
    public String reverseWords(String s) {
        String[] Words = s.split(" ");
        String Result = "";
        for(String word : Words)
        {
          Result +=  ReverseString(word.toCharArray()) + " " ;
        }
      Result = Result.substring(0, Result.length() - 1);
      return Result;
    }
  
    public String ReverseString(char[] Word) {
        int Size = Word.length;
        char Temp;
      for(int i =0 ;i<Size/2;i++)
      {
        Temp = Word[i];
        Word[i] = Word[Size-1-i];
        Word[Size-1-i] = Temp;
      }
      return String.valueOf(Word);
    }
}