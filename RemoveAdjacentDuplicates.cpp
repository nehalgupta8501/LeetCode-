class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stack;
        int i;
        string ans="";
        for(i=0; i<S.size(); i++)
        {   if(stack.empty())
            {
                stack.push(S[i]);
            }
            else
            {
                char c=stack.top();
                if(c==S[i])
                {
                    stack.pop();
                }
                else
                {
                    stack.push(S[i]);
                }
            }
        }
        while(!stack.empty())
        {
            ans.push_back(stack.top());
            stack.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};