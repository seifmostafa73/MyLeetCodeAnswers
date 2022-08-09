class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        
        
        if(magazine.size() < ransomNote.size())
            return false;
        
        
        sort(ransomNote.begin() , ransomNote.end());
        sort(magazine.begin() , magazine.end());

        int i=0,j=0;
        while(i<ransomNote.size() && j< magazine.size())
        {
            if(ransomNote[i] == magazine[j])
            {
                i++;
            }
            j++;
        }
        
        if (i != ransomNote.size())
        {
            return false;
        }
        return true;
    }
};