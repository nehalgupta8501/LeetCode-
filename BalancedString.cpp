class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0, b=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='R')
            {
                b=b-1;
            }
            if(s[i]=='L')
            {
                b=b+1;
            }
            if(b==0)
            {
                count+=1;
            }
        }
        return count;
    }
};