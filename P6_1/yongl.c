// !/usr/bin/env Program C
// Script name: Programming C P6_1
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/28/2024
// Purpose: add two arguments then divide the sum by 2
// Input: declared variables
// Output: Sum divided by two

#include <stdio.h>

// function prototype 
double yongl(double num1, double num2);

// symbolic constant 
#define DIVISOR 2.0

int main() {
    // declare variables
    double value1, value2, result;

    // user input
    printf("Enter the first number: ");
    scanf("%lf", &value1);

    printf("Enter the second number: ");
    scanf("%lf", &value2);

    // Call yongl function then store 
    result = yongl(value1, value2);

    // display result
    printf("The result of yongl is: %.2lf\n", result);

    return 0;
}

// function for yongl
double yongl(double num1, double num2) {
    // calculate average
    double sum = num1 + num2;
    double average = sum / DIVISOR;

    // return result
    return average;
}

// end
