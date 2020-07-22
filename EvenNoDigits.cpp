class Solution {
public:
    int even(int n)
    {
        int count=0;
        while(n)
        {
            count+=1;
            n=n/10;
        }
        if(count%2==0) return 1;
        return 0;
    }
    int findNumbers(vector<int>& nums) {
        int ceven=0;
        for(int i=0; i<nums.size(); i++)
        {
            ceven+=even(nums[i]);
        }
        return ceven;
    }
};