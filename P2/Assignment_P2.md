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
P9
20241112

1a. Design, code, and test a program that contains an array of ints. The array size should be the number of characters in your first and last name combined. For example, Maria Beasley (inventor of the life raft, 1880) would have an array of size 12 in her program. Use a named constant for the size of your array.
Use a loop to let the user enter values to fill the array. As the user enters values, accumulate (total) each value. 
Use a second loop to output the array's contents, along with the total and average of the values in the array.
Use your named constant in both loops' array declaration and the loop limit. (80 points)

https://github.com/christen-reinhart/24FA-COP-1220/blob/main/P9/Name_Length.c

// #/!/usr/bin/env Program C
// Script name: Programming C P9 Name_Length.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/28/2024
// Purpose: test a program that contains an array of ints
// Input: characters in 1st & last name
// Output: contents of the array, along with the total and average

#include <stdio.h>
// define constant size of the array
#define ARRAY_SIZE 15
int main() {
    int array[ARRAY_SIZE];  // declare array of integers
    int total = 0;          // variable to store the total value
    float average = 0.0;    // variable to store the average value
    // loop for user to enter values for the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter value %d: ", i + 1);
        while (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter an integer: ");
            while (getchar() != '\n'); // clear buffer
        }
        total += array[i];  // total
    }
    
    // calculate average
    average = (float)total / ARRAY_SIZE;
    // array output
    printf("\nArray contents: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }

    // total and average output
    printf("\nTotal: %d", total);
    printf("\nAverage: %.2f\n", average);
    return 0;
}
// end


1b. How did you approach the development of the program in part a? Explain how you designed, coded, and tested the program. What challenges did you have, and how did you overcome those challenges? Which code from the textbook did you reference as you developed this one? (be specific) (20 points)

1. Design:

I started by understanding the task: I needed an array whose size is the number of characters in "Christen Reinhart" (15 characters). I also had to allow the user to enter integer values, calculate the total and average, and display the results.

I used a constant ARRAY_SIZE to define the array size.

I planned two loops:

One for getting user input and calculating the total.
Another to display the array, total, and average.

2. Coding:

I defined an array with size 15.
For input, I used a loop to get values from the user, making sure only integers were allowed.

I accumulated the total as values were entered.
After collecting the values, I calculated the average.
Finally, I used another loop to print the array, total, and average.

3. Testing:

I tested by entering different numbers to check if the total and average were correct.

I also tried entering invalid input (like letters) to make sure the program only accepted numbers.

Challenges:

Input Validation: Initially, the program accepted wrong inputs, but I fixed that by adding checks to ensure only integers could be entered.

Formatting: I ensured the output looked clean and easy to read using spaces and line breaks.





