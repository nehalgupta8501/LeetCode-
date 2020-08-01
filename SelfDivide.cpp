class Solution {
public:
    bool divide(int num)
        {
            int temp=num;
            int rem=0;
            while(temp)
            {
                rem=temp%10;
                if(rem==0 || num%rem!=0) return false;
                temp/=10;
            }
            return true;
        }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++)
        {
            if(divide(i)) ans.push_back(i);
        }
        return ans;
    }
};