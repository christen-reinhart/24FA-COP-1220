// #/!/usr/bin/env Program C
// Script name: Programming C T3 Chess Board
// Author Name: Christen Reinhart
// Date of Latest Revision: 11/16/2024
// Purpose: Track Chess Pieces
// Input: Variables
// Output: Store Information

#include <stdio.h>

int main() {
    char chessboard[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };

    // Display the chessboard
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", chessboard[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//end