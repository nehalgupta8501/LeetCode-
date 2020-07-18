class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum=0, msum=INT_MIN;
        if(nums.size()==1) return nums[0];
        
        for(int i=0; i<nums.size(); i++)
        {   csum=csum+nums[i];
            msum=(msum>csum)? msum: csum;
            if(csum<0)
            {
                csum=0;
            }
            
        }
        
        return msum;
    }
};