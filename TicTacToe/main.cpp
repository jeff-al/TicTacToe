/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jefferson Alvarez
 *
 * Created on 27 de junio de 2018, 01:20 AM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iostream>

#include "TicTacToe.h"
using namespace std;

int main(int argc, char** argv) {

    TicTacToe *tictactoe = new TicTacToe();

    bool winner = false;
    int currentPlayer = 1;
    int r;
    int c;
    while (!winner) {
        tictactoe->showTable();
        tictactoe->selectPosition(currentPlayer, r, c);
        if (tictactoe->checkColumn(currentPlayer, c)) {
            winner = true;
        } else if (tictactoe->checkRow(currentPlayer, r)) {
            winner = true;
        } else if (tictactoe->checkDiagonal(currentPlayer)) {
            winner = true;
        } else {
            currentPlayer = (currentPlayer % 2) + 1;
        }
        cout << "\n\n";

    }
    tictactoe->showTable();
    cout << "The wiinner is player " << currentPlayer;
    delete tictactoe;
    return 0;
}


