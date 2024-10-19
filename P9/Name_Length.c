// #/!/usr/bin/env Program C
// Script name: Programming C P8 Counter.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: Count various types of characters
// Input: file.txt
// Output: Total Characters

#include <stdio.h>

#define NAME_LENGTH 15  // Combined number of characters in "Christen Reinhart"

int main() {
    int numbers[NAME_LENGTH];  // Array of size 15
    int total = 0;             // Variable to accumulate the total
    float average;             // Variable to store the average

    // Loop to fill the array with user input and accumulate the total
    printf("Please enter %d integer values:\n", NAME_LENGTH);
    for (int i = 0; i < NAME_LENGTH; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
        total += numbers[i];
    }

    // Calculate the average
    average = (float)total / NAME_LENGTH;

    // Output the contents of the array, the total, and the average
    printf("\nArray contents: ");
    for (int i = 0; i < NAME_LENGTH; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\nTotal: %d", total);
    printf("\nAverage: %.2f\n", average);

    return 0;
}

// end
