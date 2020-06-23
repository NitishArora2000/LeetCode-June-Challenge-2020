class Solution {
    private:
    void dfs(vector<vector<char>>& A, int x, int y) {
        if(x >= 0 && x < A.size() && y >= 0 && y < A[0].size() && A[x][y] == 'O') {
            A[x][y] = 'P';
            dfs(A, x + 1, y);
            dfs(A, x, y + 1);
            dfs(A, x - 1, y);
            dfs(A, x, y - 1);
        } else return;
    }
public:
    void solve(vector<vector<char>>& A) {
        int m = A.size();
        if(m == 0) return;
        int n = A[0].size();
        
        for(int i = 0; i < m; i++) {
            if(A[i][0] == 'O')
                dfs(A, i, 0);
            if(A[i][n - 1] == 'O')
                dfs(A, i, n - 1);
        }
        
        for(int j = 0; j < n; j++) {
            if(A[0][j] == 'O')
                dfs(A, 0, j);
            if(A[m - 1][j] == 'O')
                dfs(A, m - 1, j);
        }
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(A[i][j] == 'O')
                    A[i][j] = 'X';
                if(A[i][j] == 'P')
                    A[i][j] = 'O';
            }
        }
        
    }
};
