/* 
 * File:   TicTacToe.h
 * Author: Jefferson Alvarez
 *
 * Created on July 19, 2018, 12:10 AM
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>

using namespace std;

class TicTacToe {
public:
    TicTacToe();
    int table[3][3] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    
    bool checkRow(int value, int x);
    bool checkColumn(int value, int y);
    bool checkDiagonal(int value);
    void showTable();
    void selectPosition(int currentPlayer, int &x, int &y);
    virtual ~TicTacToe();
private:
};

#endif /* TICTACTOE_H */

