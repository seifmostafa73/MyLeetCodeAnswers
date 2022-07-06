class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> m; 

        string ans;
	    for (int i =0;i<s.length();i++)
		    m[s[i]]++;
    
	    map<int, string> samefrequency;
        for (auto it : m)  
        {
            char c = it.first;
            int n = it.second;
            samefrequency[n] += string(n, c); 
            // this creates an array having all characters with same frequnecy at same index 
            // ex : SEEiif -> 2:EEii 1:Sf
        }

        for (auto substring : samefrequency)
        {
            ans.append(substring.second);
        }
            reverse(ans.begin(),ans.end());
            return ans;
        
    }
};
