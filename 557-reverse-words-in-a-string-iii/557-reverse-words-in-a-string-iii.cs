public class Solution {
    public string ReverseWords(string s) {
        string[] Words = s.Split(" ");
        string Result = "";
        foreach(string word in Words)
        {
          Result +=  ReverseString(word.ToCharArray()) + " " ;
        }
      Result = Result.Remove(Result.Length - 1, 1);
      return Result;
    }
  
    public string ReverseString(char[] Word) {
        int Size = Word.Length;
        char Temp;
      for(int i =0 ;i<Size/2;i++)
      {
        Temp = Word[i];
        Word[i] = Word[Size-1-i];
        Word[Size-1-i] = Temp;
      }
      return string.Join("", Word);;
    }
}