// #/!/usr/bin/env Program C
// Script name: Programming C P9 Name_Length.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: test a program that contains an array of ints
// Input: characters in 1st & last name
// Output: contents of the array, along with the total and average

#include <stdio.h>

// Define a named constant for the size of the array (15 for "Christen Reinhart")
#define ARRAY_SIZE 15

int main() {
    int array[ARRAY_SIZE];  // Declare an array of integers
    int total = 0;          // Variable to store the total of the values
    float average = 0.0;    // Variable to store the average of the values
    
    // Loop to let the user enter values to fill the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter value %d: ", i + 1);
        while (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter an integer: ");
            while (getchar() != '\n'); // Clear the input buffer
        }
        total += array[i];  // Accumulate the total
    }
    
    // Calculate the average
    average = (float)total / ARRAY_SIZE;

    // Output the contents of the array
    printf("\nArray contents: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }

    // Output the total and average
    printf("\nTotal: %d", total);
    printf("\nAverage: %.2f\n", average);

    return 0;
}

// end
