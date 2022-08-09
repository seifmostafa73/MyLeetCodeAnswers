class Solution {
public:
    int firstUniqChar(string s) {
          map<char,int> nonDuplicate ;
        
        
        for(int i =0;i<s.size();i++)
        {          
           nonDuplicate[s[i]] ++;
        }
        
        
        for(int j = 0;j<s.size();j++)
        {
            if(nonDuplicate[s[j]] == 1)
                return j;
        }
        return -1;
    }
};