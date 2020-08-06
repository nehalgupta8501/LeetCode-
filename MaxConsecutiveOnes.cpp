class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cs=0, ms=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                cs+=1;
            }
            else{
                cs=0;
            }
            ms=(cs>ms)?cs:ms;
        }
        return ms;
    }
};