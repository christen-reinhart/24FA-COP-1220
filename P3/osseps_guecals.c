// !/usr/bin/env Program C
// Script name: Programming C P3 Conversion
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/7/2024
// Purpose: Conversion Program
// Input: Osseps
// Output: Geucals

#include <stdio.h>

int main() {
    // Declare variables
    float osseps, geucals;

    // Prompt user for input
    printf("Enter the weight in osseps: ");
    scanf("%f", &osseps);

    // Conversion from osseps to geucals
    geucals = osseps * 11.41;

    // Display the result
    printf("%.2f osseps is equal to %.2f geucals.\n", osseps, geucals);

    return 0;
}

//end
