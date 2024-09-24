
// !/usr/bin/env Program C
// Script name: Programming C P5 
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/21/2024
// Purpose: multiplication 
// Input: type int value
// Output: 321 Multiplied

#include <stdio.h>

#define MULTIPLIER 321

int goosey(int value) {
    int result = value * MULTIPLIER;
    printf("The result of %d multiplied by %d is: %d\n", value, MULTIPLIER, result);
    return result;
}

int main() {
    int inputValue;

    printf("Enter an integer value: ");
    scanf("%d", &inputValue);

    goosey(inputValue);

    return 0;
}

// end


