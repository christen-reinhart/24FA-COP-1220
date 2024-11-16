// #/!/usr/bin/env Program C
// Script name: Programming C T3 Multiply Tables
// Author Name: Christen Reinhart
// Date of Latest Revision: 11/16/2024
// Purpose: Calculate Math
// Input: Integers/Numbers
// Output: Multiply

#include <stdio.h>

int main() {
    int table[10][10];

    // Generate multiplication table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            table[i - 1][j - 1] = i * j;
        }
    }

    // Display the multiplication table
    printf("Multiplication Table:\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d", table[i - 1][j - 1]);
        }
        printf("\n");
    }

    return 0;
}

// end