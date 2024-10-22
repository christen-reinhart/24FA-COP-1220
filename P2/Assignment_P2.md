# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

Design:

The goal was to create a program that reads characters from input, counts how many of them are uppercase, lowercase, or punctuation marks, and then reports the totals. The program was designed to handle this using a while loop that processes characters one at a time until the end of the file (EOF) is reached.

The functions isupper(), islower(), and ispunct() from the ctype.h library were used to classify each character. These functions simplify the identification of uppercase, lowercase, and punctuation characters.

Coding:

The program begins by declaring variables to hold the count of each type of character (uppercase, lowercase, and punctuation). It then enters a loop, where the getchar() function is used to read one character at a time from the standard input.

The loop checks if the character is uppercase, lowercase, or punctuation by using the corresponding functions, and increments the appropriate counters. The loop continues until EOF is reached.

Once the input is complete, the program prints the results showing the counts of each category of characters.

Testing:

To test the program, I used redirection from an input file (infile.txt) as specified. This was done by running the program in the terminal and redirecting the contents of the file to the program's input stream using the ./program_name < infile.txt command.

I tested the program with different types of input to ensure it accurately counted uppercase, lowercase, and punctuation characters. I also ensured that the program handled EOF correctly.

Challenges and Solutions:

One challenge was ensuring the program read the input correctly until EOF was encountered. I resolved this by testing the program with various input methods, including redirection and manual input, to verify the correct usage of getchar() and the handling of EOF.

Another challenge was understanding how ctype.h functions behave with different character types, which I resolved by consulting documentation and performing tests with edge cases such as non-alphabetic characters.

