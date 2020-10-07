class Solution
{
public:
    int candidate(vector<int> &nums)
    {
        int count = 1;
        int cand = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == cand)
            {
                count++;
            }
            else
                count--;
            if (count == 0)
            {
                cand = nums[i];
                count = 1;
            }
        }
        return cand;
    }
    int majorityElement(vector<int> &nums)
    {

        int count = 0, cand;
        cand = candidate(nums);
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == cand)
                count++;
        }
        if (count > (nums.size()) / 2)
            return cand;
        return cand;
    }
};