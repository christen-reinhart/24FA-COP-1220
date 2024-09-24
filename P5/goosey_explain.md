//!/usr/bin/env Program C
//Script name: Programming C P5
//Author Name: Christen Reinhart
//Date of Latest Revision: 09/21/2024
//Purpose: multiplication
//Input: type int value
//Output: 321 Multiplied

// 1b. How did you approach the development of the program in part a? Explain how you designed, coded, and tested the program. What challenges did you have and how did you overcome those challenges? Which code from the textbook did you reference as you developed this one? (be specific) (20 points)

// The main purpose of this program is to take a user provided integer input (Number). We then take the number provided by the user and multiply it by 321 the predefined symbolic constant. The program has a single function goosey()which performs multiplication. The main() function handles user input then invokes goosey(). I declared MULTIPLIER using #define to make sure the value 321 stayed the same throughout the program. Separating the multiplication part from the main function was performed by goosey(). The main() function uses scanf() to input a integer from the user and then passes it to the goosey() function to be processed.


#include <stdio.h> -   Tells the compiler to include the standard input-output library and provides functions like scanf() and printf() that can be used for output and input.

// symbolic constant defined
#define MULTIPLIER 321 – Defines the symbolic constant MULTIPLIER with the number 321.

// prototype function
void goosey(int num); - Function for the goosey() that informs the compiler the function called takes a integer as a argument . 

int main() { - Starts the main function and the entry of the C program and starts the execution.
    int userValue;  - userValue is declared as a integer.

    // enter an integer value
    printf("Enter an integer value: "); - Prints the message asking the user to enter a value used for output of text.
    
scanf("%d", &userValue); - Reads the value that is input by the user and stores the variable userValue. The format specifier %d shows a integer is expected. &userValue passes the address so that scanf() can change the value in the memory location.

    // goosey function
    goosey(userValue); Goosey function is called here and passes the user value argument. Performs multiplication and shows the final result.

    return 0; - Means the program ran successfully and returns 0 from the main() function.
}

// function multiplied the value and symbolic constant
void goosey(int num) { - The integer argument num does not return something since its type is void.
   
 int result = num * MULTIPLIER; - variable is declared and the value num is assigned multiplied by the symbolic constant 321

    printf("The result of %d multiplied by %d is: %d\n", num, MULTIPLIER, result); - Prints the result of the multiplication to the console.
} – This closes the goosey() function and indicates the end.
// end

