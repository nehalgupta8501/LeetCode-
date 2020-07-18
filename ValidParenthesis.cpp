class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        int i;
        if(s.length()==0)
        {return true;
        }
        if(s.length()==1) 
        {return false;
        }
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                S.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')')
            {   if(S.size()==0) return false;
                if(S.top()!='[' && s[i]==']') return false;
                if(S.top()!='{' && s[i]=='}') return false;
                if(S.top()!='(' && s[i]==')') return false;
                S.pop();
            }
        }
        return S.empty();
    }
};