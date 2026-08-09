class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        vector<unordered_map<char,int>> col(m);
        vector<unordered_map<char,int>> square(m);
        vector<unordered_map<char,int>> row(m);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '.') continue;
                if (row[i].contains(board[i][j]) || col[j].contains(board[i][j]) || square[3*(i/3)+j/3].contains(board[i][j])) {
                    return false;
                    }
                col[j].insert({board[i][j], 1});
                row[i].insert({board[i][j], 1});
                square[3*(i/3)+j/3].insert({board[i][j], 1});
            }
        }
        return true;
    }
};
