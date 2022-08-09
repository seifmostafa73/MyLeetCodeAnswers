class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int> hashtable;
        
        for(int i=0;i<magazine.size();i++){
            hashtable[magazine[i]]++; //storing the count of each character in magazine
        }
        
        for(int i=0;i<ransomNote.size();i++){
            
            hashtable[ransomNote[i]]--; //now decrementing that count by one for each time we need this char in the ransomenote
            
            if(hashtable[ransomNote[i]] < 0) // if the no of repetation of this char is not enough return false
                return false;
        }
        return true;     
    }
};