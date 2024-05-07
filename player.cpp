#include "player.h"
#include <iostream>

using namespace std;

char switchPlayer(char currentPlayer) {
    return currentPlayer == 'X' ? 'O' : 'X';
}

void makeMove(char board[3][3], char currentPlayer) {
    int choice;
    cout << "Enter the number of the cell: ";
    cin >> choice; // TODO: add some validation

    int index = choice - 1;
    int row = index / 3;
    int col = index % 3;

    board[row][col] = currentPlayer;
}