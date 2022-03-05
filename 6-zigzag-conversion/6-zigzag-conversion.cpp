class Solution {
public:
    string convert(string s, int numRows) {
     if (numRows ==1) {return s;}
      int letter =0;
      int stringNo = 0;
      int direction = 1;
      string rows[numRows];
      string result ="";
      while(letter < s.size())
        {
          rows[stringNo] += s[letter];
          if( (stringNo ==0 && direction == -1 ) || (stringNo == numRows-1 && direction ==1) ) direction *= -1;
          stringNo += direction;
          letter++;
        }
      
      for(string row : rows)
      {
        //Console.WriteLine(row);
        result += row;
      }
      return result;
    }
};