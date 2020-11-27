class Solution
{
public:
    string freqAlphabets(string s)
    {
        string ans = "";
        int i = 0;
        while (i < s.size())
        {
            if ((i + 2) < s.size() && s[i + 2] == '#')
            {
                int j = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += j - 1 + 'a';
                i = i + 3;
            }
            else
            {
                int j = (s[i] - '0');
                ans += j - 1 + 'a';
                i++;
            }
        }
        return ans;
    }
};