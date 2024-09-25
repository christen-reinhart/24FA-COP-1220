# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

# start

Christen Reinhart 
Professor Cameron Spears
24/FA COP-1220-93444 Programming in C  
P6
20241008

1a.  Design, code, and test a program that includes a function of type double called yongl that accepts two double arguments (you must write the yongl function). When called, your function will add the two arguments then divide the sum by 2. It will then return that result. Your main function should call yongl then display the value returned by the function. Test your function thoroughly then submit output using the arguments 16.1 and 1.16. Remember that a structured function must have have only one return statement.  Your program must be structured, commented, professional in appearance, and use only symbolic constants as necessary. (80 points)

https://github.com/christen-reinhart/24FA-COP-1220/blob/main/P6_1/yongl.c


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



1b. How did you approach the development of the program in part a? Explain how you designed, coded, and tested the program. What challenges did you have and how did you overcome those challenges? Which code from the textbook did you reference as you developed this one? (be specific) (20 points)


Program Overview
Purpose: This program helps you find the average of two numbers. You enter two numbers the program adds them and then divides by two.
Symbolic constant: The program uses a number(DIVISOR) that always divides the sum by two.

// !/usr/bin/env Program C
// Script name: Programming C P6_1
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/28/2024
// Purpose: add two numbers then divide the sum by 2
// Input: declared variables
// Output: Sum divided by two
These are comment lines that provide data about the program:

#include <stdio.h>
Includes the standard input/output library. The library provides functions which are used to handle input and output in C programs.

// function  
double yongl(double num1, double num2);
Declares a function prototype for a function named yongl. It specifies that the yongl function will accept two double floating point parameters num1 and num2 then return a value. Defines the prototype here to ensure that the compiler knows about the function.

// symbolic constant 
#define DIVISOR 2.0
This defines the symbolic constant DIVISOR and the value 2.0. The #define preprocessor directive means every DIVISOR in the code will be replaced with 2.0 during compilation. It helps improve code readability, maintainability, and consistency if the code is changed at some point.


int main() {
The beginning of main function, and entry point of every C program. The function returns an integer, which is used to indicate the success.
 
    // declare variables
    double value1, value2, result;
Here, three double variables are declared:

value1: Stores the 1st number.
value2: Stores the 2nd number.
result: Stores the result from the yongl function.
    
// user input
    printf("Enter the first number: ");
    scanf("%lf", &value1);
prompts the user to enter the first number:

printf: message prints "Enter the first number: " to the console.
scanf: Reads input from user and stores it in the variable value1. The specifier %lf is used to read a double value.

    printf("Enter the second number: ");
    scanf("%lf", &value2);
this prompts the user to enter the second number

printf: Displays "Enter the second number: ".
scanf: Reads input and stores it in variable value2.
    // Call yongl function then store 
    result = yongl(value1, value2);
This line calls the yongl function, passing the values value1 and value2 as arguments. The result (the average of the two numbers) is stored in the result variable.

yongl(value1, value2): The yongl function with value1 and value2 is called, and the resulting average is stored.
    
// display result
    printf("The result of yongl is: %.2lf\n", result);
This displays the result:

printf: Prints the message "The result of yongl is: " followed by the value of result.
%.2lf: The format specifier %.2lf ensures that the double value is printed with two decimal places.
    return 0;
Ends the main function and returns 0 and shows the program has finished.

}
curly braces close the function.
// function for yongl
double yongl(double num1, double num2) {
yongl function takes two values, num1 and num2, and returns ½ the average of the total.

   
 // calculate average
    double sum = num1 + num2;
    double average = sum / DIVISOR; - performs the calculation

sum = num1 + num2;: - total of num1 and num2 is calculated and stored.
average = sum / DIVISOR;: - The sum is divided by the symbolic constant DIVISOR 2.0, calculating ½ average, and this value is stored.

    // return result
    return average; - Returns the calculated average 
}
Curly brace close’s function.


Summary of the Program
The program prompts the user to input two numbers.
It calls the yongl function, which:
Adds the two numbers.
Divides the sum by 2 (using the symbolic constant DIVISOR).
Returns the result.
The program then displays the result (the average of the two numbers)





