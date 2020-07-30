class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count=0;
        vector<int> ans;
        for(auto i=nums.begin(); i<nums.end(); i++)
        {   count=0;
            for(auto j=nums.begin(); j<nums.end(); j++)
            {
                if(*i>*j)
                {
                    count+=1;
                }
            }
            ans.push_back(count);
            
        }
        return ans;
    }
};