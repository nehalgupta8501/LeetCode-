class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        for(int i=0; i<startTime.size(); i++)
        {
            for(int j=startTime[i]; j<=endTime[i]; j++)
            {
                if(j==queryTime)
                {
                    count++;
                }
            }
        }
        return count;
    }
};