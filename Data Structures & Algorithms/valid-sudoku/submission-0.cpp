class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> row, column, square1,square2,square3;

    for (int i = 0; i < 9; i++) {
        row.clear();
        column.clear();
        if (i % 3 == 0) {
            square1.clear();
            square2.clear();
            square3.clear();
        }
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.') {
                if (row.count(board[i][j]) > 0) {
                    return false;
                }
                row.insert(board[i][j]);
            }
            if (board[j][i] != '.') {
                if (column.count(board[j][i]) > 0) {
                    return false;
                }
                column.insert(board[j][i]);
            }   
            if(j<3){
                if (board[i][j] != '.') {
                    if (square1.count(board[i][j]) > 0) {
                        return false;
                    }
                    square1.insert(board[i][j]);
                }
            }
            else if(j<6) {
                if (board[i][j] != '.') {
                    if (square2.count(board[i][j]) > 0) {
                        return false;
                    }
                    square2.insert(board[i][j]);
                }
            }
            else {
                if (board[i][j] != '.') {
                    if (square3.count(board[i][j]) > 0) {
                        return false;
                    }
                    square3.insert(board[i][j]);
                }
            }
        }
    }
    return true;
}

};
