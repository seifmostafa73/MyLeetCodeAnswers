class Solution {
public:
    int firstUniqChar(string s) {
          map<char,int> nonDuplicate ;
        
        
        for(int i =0;i<s.size();i++)
        {
            if( nonDuplicate.find(s[i]) == nonDuplicate.end() )
                nonDuplicate.insert(pair<char,int>(s[i],0) );
            
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