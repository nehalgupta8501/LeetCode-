class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1;
        stack<char> s2;
        string res1="", res2="";
        for(int i=0; i<S.length(); i++)
        {
            if(S[i]!='#')
            {
                s1.push(S[i]);
            }
            else if(!s1.empty())
            {
                s1.pop();
            }
        }
        for(int i=0; i<T.length(); i++)
        {
            if(T[i]!='#')
            {
                s2.push(T[i]);
            }
            else if(!s2.empty())
            {
                s2.pop();
            }
        }
        if(s1.size()!=s2.size())
            return false;
        return (s1==s2);
    }
};