class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=false;
        int temp=x;
        int ans=0,rem=0;
        if(x>0)
        {
            while(x!=0)
            {
                rem=x%10;
                x=x/10;
                if (ans > INT_MAX/10 || (ans == INT_MAX / 10 && rem > 7)) return 0;
                if (ans < INT_MIN/10 || (ans == INT_MIN / 10 && rem < -8)) return 0;
                ans=ans*10+rem;
                
            }
            if(ans==temp)
            {
                flag=true;
            } }
        else if(x==0)
        {
            flag=true;
        }
        else
        {
            flag=false;
        }
        return flag;
    }
};