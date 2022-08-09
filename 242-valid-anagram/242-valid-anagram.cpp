class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
	{
		return false;
	}
	
	map<char,int> hashtable1; // stroe freq of charaters of s
	map<char,int> hashtable2; // stroe freq of charaters of t
	
	for(auto c : s)
	{
		hashtable1[c] +=1;
		
		//Seeif -> e[2] S,i,f[1]
	}
	
	for(auto c : t)
	{
		hashtable2[c] +=1;
		//Seeif -> e[2] S,i,f[1]
	}
	
	for(int i;i<s.length();i++)
	{
		if(hashtable1[s[i]]  != hashtable2[s[i]])
		{
			return false;
		}
	}
	return true;
		
    }
};