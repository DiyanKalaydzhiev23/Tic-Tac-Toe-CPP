#include <iostream>

#include "game.h"
#include "board.h"
#include "player.h"


using namespace std;

bool checkDraw(const char board[3][3]) {
    // can be done with counter

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (board[row][col] != 'X' && board[row][col] != 'O') {
                return false;
            }
        }
    }

    cout << "It's a draw" << endl;

    printBoard(board);

    return true;
}

void gameLoop() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'},
    };

    char currentPlayer = 'X';
    bool gameEnded = false;

    while (!gameEnded) {
        printBoard(board);
        makeMove(board, currentPlayer);
        gameEnded = checkDraw(board); // TODO: && checkWin();
        currentPlayer = switchPlayer(currentPlayer);
    }
}