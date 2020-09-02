class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        // st.push(s[0]);
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(')
            {   if(st.size()>0)
                    res+=s[i];
            
            st.push(s[i]);
            }
            else 
            {
                if(st.size()>1)
                {
                    res+=s[i];
                }
                st.pop();
            }
        }
        return res;
        }
};