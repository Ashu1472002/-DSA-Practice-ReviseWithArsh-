class Solution {
     
     public:
        vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
          const int m = M.size();
          const int n = M[0].size();
          vector<vector<int>> ans(m, vector<int>(n));
      
          for (int row = 0; row < m; ++row){
      
              for (int col = 0; col < n; ++col) {
      
                  int ones = 0;
                  int count = 0;
                  for (int x = max(0, row - 1); x < min(m, row + 2); ++x){
                      for (int y = max(0, col - 1); y < min(n, col + 2); ++y) {
                          ones += M[x][y];
                          ++count;
                      }
                      ans[row][col] = ones / count;
                  }
              }
          }
          return ans;
    }
};
