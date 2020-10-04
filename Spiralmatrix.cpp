class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        if (matrix.empty())
            return {};
        int lr = 0, lc = 0, hr = matrix.size() - 1, hc = matrix[0].size() - 1;
        int tne = matrix.size() * matrix[0].size();
        vector<int> ans;
        while (tne > 0)
        {
            if (tne > 0)
            {
                for (int i = lc; i <= hc; i++)
                {
                    ans.push_back(matrix[lr][i]);
                    tne--;
                }
                lr++;
            }
            if (tne > 0)
            {
                for (int i = lr; i <= hr; i++)
                {
                    ans.push_back(matrix[i][hc]);
                    tne--;
                }
                hc--;
            }
            if (tne > 0)
            {
                for (int i = hc; i >= lc; i--)
                {
                    ans.push_back(matrix[hr][i]);
                    tne--;
                }
                hr--;
            }
            if (tne > 0)
            {
                for (int i = hr; i >= lr; i--)
                {
                    ans.push_back(matrix[i][lc]);
                    tne--;
                }
                lc++;
            }
        }
        return ans;
    }
};