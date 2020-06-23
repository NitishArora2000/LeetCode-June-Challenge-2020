class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& D) {
        int m = D.size();
        if(m==0)
        {
            return 0;
        }
        int n = D[0].size();
        if(n==0)
        {
            return 0;
        }
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1 && j==n-1)
                {
                    if(D[i][j]>=0)
                    {
                        D[i][j] = 1;
                    }
                    else{
                        D[i][j] = (-1*D[i][j]) + 1;
                    }
                    continue;
                }
                if(i==m-1)
                {
                    if(D[i][j]>=0){
                    D[i][j]= max(1,D[i][j+1]-D[i][j]);
                    }else{
                      D[i][j]= (-1*D[i][j]) + D[i][j+1];
                    }
                    continue;
                }
                 if(j==n-1)
                {
                   if(D[i][j]>=0){
                    D[i][j]= max(1,D[i+1][j]-D[i][j]);
                    }else{
                       D[i][j]= (-1*D[i][j]) + D[i+1][j];
                    }
                    continue;
                }
                if(D[i][j]>=0)
                {
                    D[i][j]= min(max(1,D[i][j+1]-D[i][j]),max(1,D[i+1][j]-D[i][j]));
                }
                else{
                 D[i][j]= (-1*D[i][j]) + min(D[i+1][j],D[i][j+1]);   
                }
                
                
            }
        }
        return D[0][0];
    }
    
};
