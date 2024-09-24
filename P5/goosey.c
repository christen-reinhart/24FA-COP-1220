// !/usr/bin/env Program C
// Script name: Programming C P5 
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/25/2024
// Purpose: multiplication 
// Input: type int value
// Output: 321 Multiplied

#include <stdio.h>

// symbolic constant defined
#define MULTIPLIER 321

// prototype function
void goosey(int num);

int main() {
    int userValue;

    // enter an integer value
    printf("Enter an integer value: ");
    scanf("%d", &userValue);

    // goosey function
    goosey(userValue);

    return 0;
}

// function multiplied the value and symbolic constant
void goosey(int num) {
    int result = num * MULTIPLIER;
    printf("The result of %d multiplied by %d is: %d\n", num, MULTIPLIER, result);
}

// end