# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

Q3: Name three specific examples where 2-dimensional arrays would be appropriate.

1. Representing a Chessboard
Scenario: You are creating a program to simulate a chess game.
Why a 2D Array is Appropriate:

a) The chessboard has a grid-like structure with 8 rows and 8 columns.
b) Each cell in the grid can represent a piece (e.g., 'K' for King, 'Q' for Queen, 'P' for Pawn) or be empty.
c) A 2D array provides an intuitive way to model the board's layout, making it easy to access or update pieces at specific positions.
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/ChessBoard.c
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
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/PixelData.c

Example Code:
#include <stdio.h>

int main() {
    int image[5][5] = {
        {0, 50, 100, 150, 200},
        {20, 70, 120, 170, 220},
        {40, 90, 140, 190, 240},
        {60, 110, 160, 210, 255},
        {80, 130, 180, 230, 255}
    };


3. Representing a Multiplication Table
Scenario: You want to create and display a multiplication table (e.g., 1–10).
Why a 2D Array is Appropriate:

a) A multiplication table can be seen as a grid where each cell holds the product of its row and column indices.
b) A 2D array provides an organized structure to efficiently store and retrieve the products.
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/MultiTable.c

Example Code:
#include <stdio.h>
int main() {
    int table[10][10];

    // Generate multiplication table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            table[i - 1][j - 1] = i * j;
        }
Summary: 2D arrays are particularly useful for grid-like structures where elements are logically organized in rows and columns.


Q4: What are pointers? How can they be used with arrays?

Pointers in C are variables that store the memory addresses of other variables; instead of storing a value directly, a pointer "points" to the location in memory where a value is stored. Pointers are essential in C because they allow for dynamic memory management and can be used to manipulate data stored in arrays and other structures.

Using Pointers with Arrays:
1)	Arrays in C are closely related to pointers. When you declare an array, the array name itself acts as a pointer to the first element in the array. For example, if you have an array int arr[5];, arr is a pointer to arr[0].

2)	You can use pointers to iterate through an array using pointer arithmetic. For example, *(arr + i) will give you the value of the ith element of the array.

3)	Pointers allow you to pass arrays to functions efficiently because instead of copying the entire array, you pass a pointer to the first element, which is much faster and conserves memory.


References:
Conficker-V106. C Projects. GitHub, https://github.com/Conficker-V106/C-Projects. Accessed 16 Nov. 2024.
C Arrays." Programiz, https://www.programiz.com/c-programming/c-arrays. Accessed 16 Nov. 2024.
Introduction to Arrays in C. GeeksforGeeks, https://www.geeksforgeeks.org/arrays-in-c-cpp/. Accessed 16 Nov. 2024.
C Library Functions. cplusplus.com, https://cplusplus.com/reference/clibrary/. Accessed 16 Nov. 2024.

















