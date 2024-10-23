// #/!/usr/bin/env Program C
// Script name: Programming C P8 CharacterCount.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/22/2024
// Purpose: Count various types of characters
// Input: file.txt
// Output: Character count by type

#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;
    int upper_count = 0, lower_count = 0, punct_count = 0;

    // prompt user to enter text
    printf("enter text (press Ctrl+D to finish on Linux Ctrl+Z on Windows):\n");

    // read characters from input 
    while ((ch = getchar()) != EOF) {
        // verify character is uppercase
        if (isupper(ch)) {
            upper_count++;
        }
        // verify character is lowercase
        else if (islower(ch)) {
            lower_count++;
        }
        // verify characters punctuation
        else if (ispunct(ch)) {
            punct_count++;
        }
    }

    // print results
    printf("\nTotal Upper Characters: %d\n", upper_count);
    printf("Total Lower Characters: %d\n", lower_count);
    printf("Total Punctuation Characters: %d\n", punct_count);

    return 0;
}

// end

