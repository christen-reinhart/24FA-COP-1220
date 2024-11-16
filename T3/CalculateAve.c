// #/!/usr/bin/env Program C
// Script name: Programming C T3 CalculateAve.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 11/26/2024
// Purpose: Determine the average of input numbers
// Input: Integers
// Output: Calculated Average

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int *marks, i, n, sum = 0;
    double average;

    // Prompt user for the number of elements
    printf("Enter number of elements (up to 100): ");
    scanf("%d", &n);

    // Validate the input size
    if (n <= 0 || n > 100) {
        printf("Error: Please enter a number between 1 and 100.\n");
        return 1; // Exit the program with an error code
    }

    // Dynamically allocate memory for the array
    marks = (int *)malloc(n * sizeof(int));
    if (marks == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit if memory allocation fails
    }

    // Input marks
    for (i = 0; i < n; ++i) {
        printf("Enter number %d: ", i + 1);
        while (scanf("%d", &marks[i]) != 1) { // Validate input is an integer
            printf("Invalid input. Please enter an integer: ");
            while (getchar() != '\n'); // Clear invalid input from buffer
        }
        sum += marks[i];
    }

    // Calculate average
    average = (double)sum / n;

    // Display the result
    printf("\nResults:\n");
    printf("Average = %.2lf\n", average);

    // Free allocated memory
    free(marks);

    return 0;
}
