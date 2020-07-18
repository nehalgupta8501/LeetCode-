class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> build;
        int i=0, j=0;
        while(i<target.size())
        {
            if(target[i]==j+1)
            {
                build.push_back("Push");
                i++;
                j++;
            }
            else
            {
                build.push_back("Push");
                build.push_back("Pop");
                j++;
            }
        }
        return build;
    }
};