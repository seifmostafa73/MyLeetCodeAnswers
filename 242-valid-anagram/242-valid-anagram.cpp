class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
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