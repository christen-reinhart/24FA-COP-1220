// !/usr/bin/env Program C
// Script name: Programming C P3 Conversion
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/13/2024
// Purpose: Calculate Area 
// Input: Side 1/2
// Output: Area

#include <stdio.h>

#define FACTOR1 2.88  // Symbolic constant for the first multiplier
#define FACTOR2 3.97  // Symbolic constant for the second multiplier

int main() {
    float side1, side2, area;

    // Prompt user for input for side1 and side2
    printf("Enter the value for side 1: ");
    scanf("%f", &side1);

    printf("Enter the value for side 2: ");
    scanf("%f", &side2);

    // Calculate the area of the scona
    area = (side1 * FACTOR1) + (side2 * FACTOR2);

    // Display the result
    printf("The area of the scona is: %.2f\n", area);

    return 0;
}

//end
