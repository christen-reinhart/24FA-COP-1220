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

    printf("Enter positive integers (enter 1212 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 1212) {
            break;  // Exit the loop when 1212 is entered
        }

        if (number > 0) {
            if (number % 2 == 0) {
                evenCount++;
                evenSum += number;
            } else {
                oddCount++;
                oddSum += number;
            }
        }
    }

    // Calculate averages
    if (evenCount > 0) {
        evenAvg = (float)evenSum / evenCount;
    }
    if (oddCount > 0) {
        oddAvg = (float)oddSum / oddCount;
    }

    // Output results
    printf("Total even numbers: %d\n", evenCount);
    printf("Average of even numbers: %.2f\n", evenAvg);
    printf("Total odd numbers: %d\n", oddCount);
    printf("Average of odd numbers: %.2f\n", oddAvg);

    // Determine who "won"
    if (evenCount > oddCount) {
        printf("Yippee, the evens won!\n");
    } else if (oddCount > evenCount) {
        printf("Wowee, the odds prevailed!\n");
    } else {
        printf("Yikes, it was a tie!\n");
    }

    return 0;
}
