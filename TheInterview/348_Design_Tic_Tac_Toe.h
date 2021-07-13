//
//  348_Design_Tic_Tac_Toe.h
//  TheInterview
//
//  Created by Mr Kes on 7/12/21.
//

#ifndef _48_Design_Tic_Tac_Toe_h
#define _48_Design_Tic_Tac_Toe_h
class TicTacToe {
public:
    vector<vector<int>> board;
    int n;
    
    /** Initialize your data structure here. */
    TicTacToe(int n) {
       board.assign(n, vector<int>(n,0));
        this->n = n;
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        board[row][col] = player;
        if(checkCol(col,player) ||
           checkRow(row,player) ||
           (checkDiagonal(player) && row == col) ||
           (checkAntiDiagonal(player) && row == n - col - 1) ){
            return player;
        }
   
        // There is no winner
        return 0;
    }
    
    bool checkCol(int col, int player){
        for(int row = 0; row < n; row++){
            if(board[row][col] != player){
                return false;
            }
        }
        return true;
    }
    
    bool checkRow(int row, int player){
        for(int col = 0; col < n; col++){
            if(board[row][col] != player){
                return false;
            }
        }
        return true;
    }
    
    bool checkDiagonal(int player){
        for(int i = 0; i <n; i++){
            if(board[i][i] != player){
                return false;
            }
        }
        return true;
    }
    
    bool checkAntiDiagonal(int player){
        for(int i = 0; i < n; i++){
            if(board[i][n-i-1] != player){
                return false;
            }
        }
        return true;
    }
    
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */

#endif /* _48_Design_Tic_Tac_Toe_h */
