# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games


Christen Reinhart 
Professor Cameron Spears
24/FA COP-1220-93444 Programming in C  
P7
20241022
1a. Design, code, and test a program that accepts positive integers until the special value 1212 is entered. After input terminates, the program should report the total number of even integers (excluding the special value) , the average value of the even integers, the total number of odd integers, and the average value of the odd integers. The program should also report "Yippee, the evens won!",  "Wowee, the odds prevailed!", or "Yikes, it was a tie!" based on the results. Test your program thoroughly and submit output with at least 10 integers as input. Make sure your loop is a structured loop (refer to COP 1000 priming read/priming input). (80 points)
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/P7/Yippee.c

// #/!/usr/bin/env Program C
// Script name: Programming C P7 Yippee.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: Report even/odd & average number counter
// Input: positive numbers until value 1212
// Output: Report totals
#include <stdio.h>
int main() {
    int number, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    float evenAvg = 0.0, oddAvg = 0.0;

    // start counter even and odd numbers
    // start sums even and odd numbers
    // start averages even and odd numbers       
printf("Enter positive integers (enter 1212 to stop):\n");
    // loop to read numbers the user inputs
    while (1) {
        // read input number
        scanf("%d", &number);

        // when 1212 exit loop
        if (number == 1212) {
            break;  // exit loop when 1212 
        }
      // when positive number process it
        if (number > 0) {
            // check for even number 
            if (number % 2 == 0) {
                evenCount++;      // move even number counter
                evenSum += number; // add number to sum
            } 
            // the number is odd
            else {
                oddCount++;        // move odd number counter
                oddSum += number;  // add number to odd sum
            }
        }
    }
    // once exit loop, calculate averages if there are even or odd numbers
   // calculate average of even numbers 
    if (evenCount > 0) {
        evenAvg = (float)evenSum / evenCount;
    }
    // calculate average of odd numbers
    if (oddCount > 0) {
        oddAvg = (float)oddSum / oddCount;
    }
    // output results
    printf("Total even numbers: %d\n", evenCount);
    printf("Average of even numbers: %.2f\n", evenAvg);
    printf("Total odd numbers: %d\n", oddCount);
    printf("Average of odd numbers: %.2f\n", oddAvg);

    // which group had more numbers print the results
    // winner based on higher count  
    if (evenCount > oddCount) {
        printf("Yippee, the evens won!\n");
    } else if (oddCount > evenCount) {
        printf("Wowee, the odds prevailed!\n");
    } else {
        printf("Yikes, it was a tie!\n");
    }
    return 0;
}
// end

BREAK PICTURES!!!!!


1b. How did you approach the development of the program in part a? Explain how you designed, coded, and tested the program. What challenges did you have and how did you overcome those challenges? Which code from the textbook did you reference as you developed this one? (be specific) (20 points)
To develop the program, I started by focusing on the main goals it had to achieve. These were prompting the user to enter numbers and identifying whether they were even or odd. Being able to stop the input process when 1212 was entered and break the loop. Calculating and printing the count and average of the numbers. Then comparing odd to even to see which group had more.
To figure this problem first I designed the loop to accept input and break once 1212 was entered. Next, I worked on logic to distinguish the difference between even and odd numbers. I set up how to track the count and sum of even and odd numbers. Then I incorporated a mechanism to compute the average only when numbers were in both kinds of numbers. Finally, I added conditional logic to compare the groups to figure out which one had more counts. The greatest challenge was figuring out how to get all the components to work together in a complete process.

#include <stdio.h>
The standard input-output header file is stdio.h. It allows functions like printf and scanf to be used in the program for input and output.


int main() {
This is the main function where the program execution begins. Every C program must have a main function.


int number, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
float evenAvg = 0.0, oddAvg = 0.0;
Here, several variables are declared:

Number is an integer used to store the number entered by the user.
evenCount and oddCount are counters for even and odd numbers, starting at zero.
evenSum and oddSum store the sum of even and odd numbers, starting at zero.
evenAvg and oddAvg store the average of even and odd numbers, starting at zero.

printf("Enter positive integers (enter 1212 to stop):\n");
Prompts the user to enter positive numbers. This process will continue unless the user enters 1212.


while (1) {
    scanf("%d", &number);
The beginning of the infinite loop while(1) keeps it running endlessly. Within the loop, the program uses scanf to read the integer from the user and store it.


if (number == 1212) {
    break;  // Exit the loop when 1212 is entered
}
Checks to see if the user entered 1212. If true, it then breaks the loop, ending the input process.


if (number > 0) {
    if (number % 2 == 0) {
        evenCount++;
        evenSum += number;
    } else {
        oddCount++;
        oddSum += number;
    }
}
Checks if the input is a positive number larger than zero and if it is, then determines if the number is even or odd:
number % 2 == 0 checks if the number is divisible by 2 and even.
Once determined the number is even, evenCount is moved up, and the number is added to evenSum.
If the number is odd, oddCount is moved up, and the number is added to oddSum.

// computes averages
if (evenCount > 0) {
    evenAvg = (float)evenSum / evenCount;
}
if (oddCount > 0) {
    oddAvg = (float)oddSum / oddCount;
}
Once the loop is complete, the program figures the average of even and odd numbers:

When the evenCount is larger than 0, it computes the average by dividing the total of the even numbers by how many even numbers.
Similarly, if oddCount is larger than 0, it computes the odd average.
The casting (float) makes sure the final result is a floating-point division, ending with a more accurate result.

// Output results
printf("Total even numbers: %d\n", evenCount);
printf("Average of even numbers: %.2f\n", evenAvg);
printf("Total odd numbers: %d\n", oddCount);
printf("Average of odd numbers: %.2f\n", oddAvg);
Here, the program prints the results:
count even numbers and their average.
count odd numbers and their average.
%.2f is used in formatting the floating-point numbers 2 decimal places.

// determine who "won" based on the count
if (evenCount > oddCount) {
    printf("Yippee, the evens won!\n");
} else if (oddCount > evenCount) {
    printf("Wowee, the odds prevailed!\n");
} else {
    printf("Yikes, it was a tie!\n");
}
The program compares the count of even and odd numbers to determine which group has more numbers:
More even numbers, it prints "Yippee, the evens won!"
More odd numbers, it prints "Wowee, the odds prevailed!"
When the count is the same, it prints "Yikes, it was a tie!"

return 0;
The return 0; statement shows the program has been executed.

// end

I referenced the Indefinite Loops and Counting Loops section in the book when writing this code. It is on page 207 Listing 6.10 The sweetiel.c Program using the while loop examples a counting loop. Also, I used The if Statement section in the book on page 246 Listing 7.1 The colddays.c Program for averages and used Adding else to the if Statement on page 248.





