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
