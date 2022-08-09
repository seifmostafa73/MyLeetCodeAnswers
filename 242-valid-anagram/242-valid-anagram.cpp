class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
	{
		return false;
	}
	    vector<int> sv(26,0);
		vector<int> tv(26,0);
		
		for(int i = 0 ; i < s.size() ; i++){
			sv[s[i]-'a']++;
			tv[t[i]-'a']++;
		}
		return sv == tv;
    }
};