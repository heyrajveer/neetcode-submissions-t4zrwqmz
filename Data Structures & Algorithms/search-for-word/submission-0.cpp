class Solution {
public:
   
//    bool solve(vector<vector<char>>& board, string word,int i,int j,int k,int row,int col){
//    if(k >=word.size()-1){
//     return true;
//    }
//    if(i>=row || i<0 || j>=col ||j<0){
//     return false;
//    }
//     if(board[i][j]==word[k]){
//     bool left = solve(board,word,i,j-1,k++,row,col);

//     }
//     return (left ||right||up ||down);
    
//    }
   bool solve(vector<vector<char>>& board, string word,
           int i, int j, int k, int row, int col) {

    // ✅ base case
    if (k == word.size()) return true;

    // ❌ boundary + mismatch check
    if (i < 0 || j < 0 || i >= row || j >= col || board[i][j] != word[k]) {
        return false;
    }

    // ✅ mark visited
    char temp = board[i][j];
    board[i][j] = '#';

    // 🔄 explore all 4 directions
    bool left  = solve(board, word, i, j - 1, k + 1, row, col);
    bool right = solve(board, word, i, j + 1, k + 1, row, col);
    bool up    = solve(board, word, i - 1, j, k + 1, row, col);
    bool down  = solve(board, word, i + 1, j, k + 1, row, col);

    // 🔙 backtrack
    board[i][j] = temp;

    return left || right || up || down;
}
    bool exist(vector<vector<char>>& board, string word) {
        int row =board.size();
        int col =board[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(solve(board,word,i,j,0,row,col)){
                    return true;
                }
            }
        }
        return false;
      
    }
};
