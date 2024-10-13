// #/!/usr/bin/env Program C
// Script name: Programming C P8 Counter.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: Count various types of characters
// Input: file.txt
// Output: Total Characters

#include <stdio.h>
#include <ctype.h>

int main() {
    int ch; // To hold each character
    int upper_count = 0, lower_count = 0, punct_count = 0;

    // Read characters until EOF is encountered
    while ((ch = getchar()) != EOF) {
        // Check if the character is uppercase
        if (isupper(ch)) {
            upper_count++;
        }
        // Check if the character is lowercase
        else if (islower(ch)) {
            lower_count++;
        }
        // Check if the character is punctuation
        else if (ispunct(ch)) {
            punct_count++;
        }
    }

    // Output the results
    printf("Total Uppercase Characters: %d\n", upper_count);
    printf("Total Lowercase Characters: %d\n", lower_count);
    printf("Total Punctuation Characters: %d\n", punct_count);

    return 0;
}
