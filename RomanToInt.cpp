class Solution {
public:
    int convert(char r) {
        switch(r)
         {
             case 'M': return 1000;
                      
             case 'D': return 500;
                      
             case 'C': return 100;
                      
             case 'L': return 50;
                      
             case 'X': return 10;
                      
             case 'V': return 5;
                      
             case 'I': return 1;
                      
         }
          return 0;
        }
   
    int romanToInt(string s)
    {  int sum=0,i=0;
        for(i=0; i<s.length(); i++)
        {   int s1=convert(s[i]);
            if(i+1<s.length())
            {
                int s2=convert(s[i+1]);
            if(s1>=s2)
            {
                sum=sum+s1;
            }
            else
            {
                sum=sum+s2-s1;
                i++;
            }
        }
         else
         {
             sum=sum+s1;
         }
        
    }
     return sum;
    }
};