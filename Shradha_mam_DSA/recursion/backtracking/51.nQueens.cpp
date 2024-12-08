
optimal sol ..

class Solution {
public:

    bool isSafe(vector<string> &board, int row, int col, int n) {  //O(n)
        //horizontal check ;  
        //but actually we dont need to check for this condition cause for every function call we are passing new row i.e row + 1 
        for(int j=0; j<n; j++) {
            if(board[row][j] == 'Q') {
                return false;
            }
        }

        //vertical check ;
        for(int i=0; i<n; i++) {
            if(board[i][col] == 'Q') {
                return false;
            }
        }

        //left digonal chaeck;
        for(int i=row, j=col; i>=0 && j>=0; i--,j--) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        //right digonal chaeck;
        for(int i=row, j=col; i>=0 && j<=n; i--,j++) {
            if(board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueen(vector<string> &board, int n, int row, vector<vector<string>>& res) {
        if(row == n) {  //this is the base case 
            res.push_back({board});
            return;
        }


        for (int j=0; j<n; j++) {
            if (isSafe(board,row,j,n)) {
                board[row][j] = 'Q';
                nQueen(board, n, row + 1, res);

                board[row][j] = '.';  //backtracking step ; we need to repalace '.' with 'Q' since its not the safe place to place 'Q'
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n,string(n,'.'));  //{"....","....","...."} 
        //this is vector of string and can be treated as 2D vector cause string is a kind of arr .


        nQueen(board, n, 0, res);  

        return res;
    }
};