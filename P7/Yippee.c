// #/!/usr/bin/env Program C
// Script name: Programming C P7 Yippee
// Author Name: Christen Reinhart
// Date of Latest Revision: 10/14/2024
// Purpose: Report odd & averager integer value
// Input: integers until value 1212
// Output: Report total number of integers

#include <stdio.h>

int main() {
    int number, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
    float evenAvg = 0.0, oddAvg = 0.0;

    // Pseudocode:
    // Initialize counters for even and odd numbers
    // Initialize sums for even and odd numbers
    // Initialize averages for even and odd numbers
    
    printf("Enter positive integers (enter 1212 to stop):\n");

    // Loop to read numbers from the user
    while (1) {
        // Read the input number
        scanf("%d", &number);

        // If the number is 1212, exit the loop
        if (number == 1212) {
            break;  // Exit the loop when 1212 is entered
        }

        // If the number is positive, process it
        if (number > 0) {
            // Check if the number is even
            if (number % 2 == 0) {
                evenCount++;      // Increment the even number counter
                evenSum += number; // Add the number to the even sum
            } 
            // Otherwise, the number is odd
            else {
                oddCount++;        // Increment the odd number counter
                oddSum += number;  // Add the number to the odd sum
            }
        }
    }

    // Pseudocode:
    // After exiting the loop, calculate the averages if there are even or odd numbers
    
    // Calculate the average of even numbers if there are any
    if (evenCount > 0) {
        evenAvg = (float)evenSum / evenCount;
    }
    // Calculate the average of odd numbers if there are any
    if (oddCount > 0) {
        oddAvg = (float)oddSum / oddCount;
    }

    // Output the results
    printf("Total even numbers: %d\n", evenCount);
    printf("Average of even numbers: %.2f\n", evenAvg);
    printf("Total odd numbers: %d\n", oddCount);
    printf("Average of odd numbers: %.2f\n", oddAvg);

    // Pseudocode:
    // Determine which group (even or odd) had more numbers and print the result
    
    // Determine the winner based on which count is higher
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
