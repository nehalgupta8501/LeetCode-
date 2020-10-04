class Solution
{
public:
    void reverse(vector<int> &arr, int st, int en)
    {
        while (st < en)
        {
            int tmp = arr[st];
            arr[st] = arr[en];
            arr[en] = tmp;
            st++;
            en--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        if (k >= nums.size())
        {
            k %= nums.size();
        }
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }
};