class Solution {
public:
    int maximum69Number (int num) {
        
        string n=to_string(num);
        for(int i=0; i<n.length(); i++)
        {
            if(n[i]!='9')
            {
                n[i]='9';
                break;
            }
        }
        stringstream ss(n);
        int x=0;
        ss>>x;
        return x;
    }
};