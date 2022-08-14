class Solution {
public:
    bool isValid(string s) {
        
        stack<char> mystack;
        
        for (int i =0; i<s.size() ;i++)
        {
            if(s[i] == '(' || s[i] == '[' ||s[i] == '{')
                mystack.push(s[i]);
            else if (mystack.size() == 0)
                return false;
            else if(s[i] == ')' && mystack.top() == '('   ) { 
                mystack.pop();
            }else if(s[i] == '}' && mystack.top() == '{' ) { 
                mystack.pop();
            }else if(s[i] == ']' && mystack.top() == '[' ) { 
                mystack.pop();
            }
            else{return false;}
        }
        
        if(mystack.size() !=0)
            return false;
        
        return true;
    }
};