// !/usr/bin/env Program C
// Script name: Programming C P3
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/28/2024
// Purpose: 
// Input: ASCII #
// Output: ASCII Character

#include <stdio.h>

int main() {
    int ascii_code;  // variable for the ASCII code

    // Prompt to enter an ASCII value
    printf("Enter ASCII value: ");
    scanf("%d", &ascii_code);

    // character that corresponds to the ASCII code
    printf("The character corresponding to ASCII code %d is '%c'.\n", ascii_code, ascii_code);

    // output for decimal
    printf("ASCII code 106 goes with '%c'.\n", 106);
    printf("ASCII code 122 goes with '%c'.\n", 122);

    return 0;
}

//end
