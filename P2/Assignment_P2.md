# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

1. Representing a Chessboard

Scenario: You are creating a program to simulate a chess game.

Why a 2D Array is Appropriate:

a)The chessboard has a grid-like structure with 8 rows and 8 columns.

b) Each cell in the grid can represent a piece (e.g., 'K' for King, 'Q' for Queen, 'P' for Pawn) or be empty.

c) A 2D array provides an intuitive way to model the board's layout, making it easy to access or update pieces at specific positions.

Example:

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

2. Storing Pixel Data for an Image

Scenario: You are processing a grayscale image where each pixel has an intensity value between 0 and 255.

Why a 2D Array is Appropriate:

a) An image is essentially a matrix of pixels.

b) Each row in the 2D array corresponds to a horizontal line of pixels, and each column corresponds to a vertical line.

c) A 2D array allows efficient access and manipulation of pixel data for tasks like filtering or transformations.

Example Code:

int image[480][640]; // A 480x640 grayscale image


3. Representing a Multiplication Table

Scenario: You want to create and display a multiplication table (e.g., 1–10).

Why a 2D Array is Appropriate:

a) A multiplication table can be seen as a grid where each cell holds the product of its row and column indices.

b) A 2D array provides an organized structure to store and retrieve the products efficiently.

Example Code:

int multiplicationTable[10][10];
for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
        multiplicationTable[i - 1][j - 1] = i * j;
    }
}

Summary: 2D arrays are particularly useful for grid-like structures where elements are logically organized in rows and columns. Common use cases include:












