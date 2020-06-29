class Solution {
public:
    int uniquePaths(int m, int n) {
        int ar[m][n];
        memset(ar,0,sizeof(ar));
        ar[0][0]=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>0)
                    ar[i][j]+=ar[i-1][j];
                if(j>0)
                    ar[i][j]+=ar[i][j-1];
            }
        }
        return ar[m-1][n-1];
    }
};
