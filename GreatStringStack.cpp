class Solution {
public:
    string makeGood(string s) {
        string res="";
        stack<char> st;
        st.push(s[0]);
        for(int i=1; i<s.length(); i++)
        {   
            if(st.empty())
                st.push(s[i]);
            else{
            int asc=(int)s[i];
            int tsc=(int)st.top();
            if(abs(asc-tsc)==32) //the adjacent letters are upper and lower case 
                st.pop();
            else st.push(s[i]); }
        }
        while(!st.empty()) {
            
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};