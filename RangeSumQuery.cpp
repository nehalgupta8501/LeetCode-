class NumArray
{
public:
    vector<int> prearr;
    NumArray(vector<int> &nums)
    {

        int n = nums.size();
        prearr.resize(n + 1);
        for (int i = 0; i < n; i++)
        {
            prearr[i + 1] = prearr[i] + nums[i];
        }
    }

    int sumRange(int i, int j)
    {

        return prearr[j + 1] - prearr[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */