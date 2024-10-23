# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

Christen Reinhart 
Professor Cameron Spears
24/FA COP-1220-93444 Programming in C  
P8
20241029

1a. Design, code, and test a C program that reads input as a stream of characters until the value EOF is encountered (hint: use redirection). Have the program report the total number of uppercase characters, total number of lowercase characters, and total number of punctuation characters read. (You can use the functions in ctype.h for this assignment.) Use the attached file infile.txt as input when you submit your assignment. (80 points)

https://github.com/christen-reinhart/24FA-COP-1220/blob/main/P8/CharacterCount.c


SPACE!!

// #/!/usr/bin/env Program C
// Script name: Programming C P8 CharacterCount.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/22/2024
// Purpose: Count various types of characters
// Input: file.txt
// Output: Total Characters
#include <stdio.h>
#include <ctype.h>
int main() {
    int ch;
    int upper_count = 0, lower_count = 0, punct_count = 0;
    // prompt user to enter text
    printf("Please enter text (press Ctrl+D to finish on Linux/macOS or Ctrl+Z on Windows):\n");
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
    printf("\nTotal Uppercase Characters: %d\n", upper_count);
    printf("Total Lowercase Characters: %d\n", lower_count);
    printf("Total Punctuation Characters: %d\n", punct_count);
 return 0;
}
// end

1b. How did you approach the development of the program in part a? Explain how you designed, coded, and tested the program. What challenges did you have and how did you overcome those challenges? Which code from the textbook did you reference as you developed this one? (be specific) (20 points)


Design:
The program reads characters from input, counts uppercase, lowercase, and punctuation marks, and reports the totals. Functions from ctype.h (isupper(), islower(), ispunct()) classify the characters within a while loop that runs until EOF is reached.
Coding:
The program initializes counters for each character type and uses getchar() to read input. Based on the character type, the appropriate counter is incremented, and the results are printed once the input ends.
Testing:
The program was tested using both manual input and redirection from a file to ensure accurate counting and proper EOF handling.
Challenges:
Handling EOF and understanding ctype.h functions were initial challenges. Testing with various input types and consulting documentation helped resolve these issues.




