public class Solution {
    public void ReverseString(char[] s) {
        int Size = s.Length;
        char Temp;
      for(int i =0 ;i<Size/2;i++)
      {
        Temp = s[i];
        s[i] = s[Size-1-i];
        s[Size-1-i] = Temp;
      }
    }
}