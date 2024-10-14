// #/!/usr/bin/env Program C
// Script name: Programming C P7 Yippee.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: Report odd & averager number value
// Input: positive numbers until value 1212
// Output: Report total number of numbers

#include <stdio.h>

int main() {
    int number, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    float evenAvg = 0.0, oddAvg = 0.0;

    // start counters for even and odd numbers
    // start sums for even and odd numbers
    // start averages for even and odd numbers
    
    printf("Enter positive integers (enter 1212 to stop):\n");

    // loop to read numbers the user imputs
    while (1) {
        // read input number
        scanf("%d", &number);

        // when number is 1212, exit loop
        if (number == 1212) {
            break;  // exit loop when 1212 entered
        }

        // If the number is positive, process it
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
