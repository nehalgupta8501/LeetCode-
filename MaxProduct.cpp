class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j, max=0, prod=0;
        for(i=0; i<nums.size(); i++)
        {
            for(j=i+1; j<nums.size(); j++)
            {
                
                if((nums[i]-1)*(nums[j]-1)>max)
                {
                    max=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return max;
    }
};