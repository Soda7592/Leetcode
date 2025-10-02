class Solution {
private:
    int m, n;
    bool found = false;
public:
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        found = false;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0] && !found) {
                    dfs(board, word, i, j, 0);
                }
                if (found) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    void dfs(vector<vector<char>>& board, const string& word, int i, int j, int index) {
        if (index == word.length() - 1) {
            if (board[i][j] == word[index]) {
                 found = true;
            }
            return;
        }
        if (board[i][j] != word[index]) {
            return;
        }

        char original_char = board[i][j];
        board[i][j] = '#';

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        
        for (int k = 0; k < 4; ++k) {
            int ni = i + dr[k];
            int nj = j + dc[k];

            if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                if (board[ni][nj] != '#' && !found) {
                     if (board[ni][nj] == word[index + 1]) {
                         dfs(board, word, ni, nj, index + 1);
                     }
                }
            }
        }

        board[i][j] = original_char; 
    }
};
