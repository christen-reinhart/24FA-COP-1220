// !/usr/bin/env Program C
// Script name: Programming C P6
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/28/2024
// Purpose: 
// Input: symbolic constants
// Output: final value

#include <stdio.h>

// prototype
double yongl(double num1, double num2);

// main function
int main() {
    // symbolic constants for the input values
    const double VALUE1 = 16.1;
    const double VALUE2 = 1.16;
    
    // yongl function and store 
    double result = yongl(VALUE1, VALUE2);
    
    // display the result
    printf("The result of yongl(%.2f, %.2f) is: %.2f\n", VALUE1, VALUE2, result);
    
    return 0;
}

// function to add two numbers, divide, and return the result
double yongl(double num1, double num2) {
    // add the numbers
    double sum = num1 + num2;
    
    // divide the sum by 2 
    return sum / 2;
}

// end