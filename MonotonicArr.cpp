class Solution
{
public:
    bool isMonotonic(vector<int> &A)
    {
        bool inc = true;
        bool dec = true;
        int i = 0, j = 0;
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] < A[i - 1])
                inc = false;
            if (A[i] > A[i - 1])
                dec = false;
        }
        return inc || dec;
    }
};