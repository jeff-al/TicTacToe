/* 
 * File:   TicTacToe.cpp
 * Author: Jefferson Alvarez
 * 
 * Created on July 19, 2018, 12:10 AM
 */

#include "TicTacToe.h"

TicTacToe::TicTacToe() {
}

TicTacToe::~TicTacToe() {
}

bool TicTacToe::checkRow(int value, int x) {
    if (table[x][0] == value && table[x][1] == value && table[x][2] == value) {
        return true;
    }
    return false;
}

bool TicTacToe::checkColumn(int value, int y) {
    if (table[0][y] == value && table[1][y] == value && table[2][y] == value) {
        return true;
    }
    return false;
}

bool TicTacToe::checkDiagonal(int value) {
    if (table[0][0] == value && table[1][1] == value && table[2][2] == value) {
        return true;
    } else if (table[0][2] == value && table[1][1] == value && table[2][0] == value) {
        return true;
    }
    return false;
}

void TicTacToe::selectPosition(int currentPlayer, int &x, int &y) {
    int r = 0;
    int c = 0;
    do {
        cout << "Player " << currentPlayer << " choose a position\n";
        cout << "R: ";
        cin >> r;
        cout << "C: ";
        cin >> c;
    } while (table[r][c] != -1);
    table[r][c] = currentPlayer;
    x = r;
    y = c;
}

void TicTacToe::showTable() {
    cout << "(F / C)     0   1    2   " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "        " << i;
        for (int j = 0; j < 3; j++) {
            if (table[i][j] == -1) {
                cout << "  _  ";
            } else if (table[i][j] == 2) {
                cout << "  O  ";
            } else {
                cout << "  X  ";
            }
        }
        cout << endl;
    }
}
