class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
            return -1;
        int large = arr[0], pos = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > large)
            {
                large = arr[i];
                pos = i;
            }
        }
        return pos;
    }
};