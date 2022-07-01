class Solution {
  public:
    bool isSafe(int row, int col, vector < string > board, int n) {
      int i = row;
      int j = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = j;
      row = i;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = i;
      col = j;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & queen, int n) {
      if (col == n) {
        queen.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (isSafe(row, col, board, n)) {
          board[row][col] = 'Q';
          solve(col + 1, board, queen, n);
          board[row][col] = '.';
        }
      }
    }

  public:
    vector < vector < string >> solveNQueens(int n) {
      vector < vector < string >> queen;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      solve(0, board, queen, n);
      return queen;
    }
}
