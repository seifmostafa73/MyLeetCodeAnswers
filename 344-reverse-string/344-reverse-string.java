class Solution {
    public void reverseString(char[] s) {
        int Size = s.length;
        char Temp;
      for(int i =0 ;i<Size/2;i++)
      {
        Temp = s[i];
        s[i] = s[Size-1-i];
        s[Size-1-i] = Temp;
      }
    }
}