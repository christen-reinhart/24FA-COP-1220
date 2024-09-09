// !/usr/bin/env Program C
// Script name: Programming C P3
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/28/2024
// Purpose: 
// Input: ASCII #
// Output: ASCII Character

#include <stdio.h>

int main() {
    int ascii_code;  // Declare a variable to store the ASCII code

    // Prompt the user to enter an ASCII code value
    printf("Enter ASCII value: ");
    scanf("%d", &ascii_code);

    // Output the character that corresponds to the ASCII code
    printf("The character corresponding to ASCII code %d is '%c'.\n", ascii_code, ascii_code);

    // Test output for decimal 106 and 122
    printf("ASCII code 106 goes with '%c'.\n", 106);
    printf("ASCII code 122 goes with '%c'.\n", 122);

    return 0;
}

//end
