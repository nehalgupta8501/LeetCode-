class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int mat[n][m], count=0;
        for(int i=0; i<n; i++)
        {   for(int j=0; j<m; j++)
            {   mat[i][j]=0;    } }
        
        for(int i=0; i<indices.size(); i++)
        {
            int r=indices[i][0];
            int c=indices[i][1];
            
            for(int j=0; j<m; j++) mat[r][j]+=1;
            for(int j=0; j<n; j++) mat[j][c]+=1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(mat[i][j]%2)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};