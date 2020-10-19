class Solution
{
public:
    bool validMountainArray(vector<int> &A)
    {
        if (A.size() < 3)
            return false;
        int largest = A[0];
        bool inc = true, dec = true;
        int posL = 0;
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] > largest)
            {
                largest = A[i];
                posL = i;
            }
        }
        if (posL == A.size() - 1 || posL == 0)
            return false;
        for (int i = 1; i < posL; i++)
        {
            if (A[i] <= A[i - 1])
            {
                inc = false;
                break;
            }
        }
        for (int i = posL + 1; i < A.size(); i++)
        {
            if (A[i] >= A[i - 1])
            {
                dec = false;
                break;
            }
        }
        return (inc && dec);
    }
};