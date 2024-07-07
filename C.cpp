class Solution {
public:
    int numberOfSubmatrices(std::vector<std::vector<char>>& ans) {
        int m = ans.size(), n = ans[0].size();
        vector<vector<int>> x(m + 1,vector<int>(n + 1, 0));
       vector<vector<int>> y(m + 1,vector<int>(n + 1, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (ans[i][j] == 'X') {
                    x[i+1][j+1]++;
                } else if (ans[i][j] == 'Y') {
                    y[i+1][j+1]++;
                }
            }
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                x[i][j] +=x[i-1][j] + x[i][j-1] - x[i-1][j-1];
                y[i][j] += y[i-1][j] + y[i][j-1] - y[i-1][j-1];
            }
        }
        
        int r = 0;
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                int v = x[i][j], z = y[i][j];
                if (v == z && v> 0) r++;
            }
        }
        
        return r;
    }
};