# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games


#include <stdio.h>
This line includes the standard input-output header file (stdio.h). It allows the program to use functions like printf and scanf for input and output.


int main() {
This is the main function where the program execution begins. Every C program must have a main function.


int number, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;
float evenAvg = 0.0, oddAvg = 0.0;
Here, several variables are declared:

number is an integer used to store the number entered by the user.
evenCount and oddCount are counters for even and odd numbers respectively, initialized to 0.
evenSum and oddSum store the sum of even and odd numbers, initialized to 0.
evenAvg and oddAvg store the average of even and odd numbers, initialized to 0.0 (float data type).

printf("Enter positive integers (enter 1212 to stop):\n");
This line prompts the user to enter positive integers. The input process will continue until the user enters 1212.


while (1) {
    scanf("%d", &number);
This is the start of an infinite loop (while(1) keeps it running indefinitely). Inside the loop, the program reads an integer from the user via scanf and stores it in number.


if (number == 1212) {
    break;  // Exit the loop when 1212 is entered
}
This checks if the user entered 1212. If true, it breaks out of the loop, effectively ending the input process.


if (number > 0) {
    if (number % 2 == 0) {
        evenCount++;
        evenSum += number;
    } else {
        oddCount++;
        oddSum += number;
    }
}
This part checks if the input is a positive number (greater than 0). If it is, the program determines if the number is even or odd:

number % 2 == 0 checks if the number is divisible by 2 (even).
If the number is even, evenCount is incremented, and the number is added to evenSum.
If the number is odd, oddCount is incremented, and the number is added to oddSum.

// Calculate averages
if (evenCount > 0) {
    evenAvg = (float)evenSum / evenCount;
}
if (oddCount > 0) {
    oddAvg = (float)oddSum / oddCount;
}
After the loop, the program calculates the average of even and odd numbers, if any were entered:

If evenCount is greater than 0, it calculates the even average by dividing the sum of even numbers by the count of even numbers.
Similarly, if oddCount is greater than 0, it calculates the odd average.
The casting (float) ensures the result is a floating-point division, producing a more precise result.

// Output results
printf("Total even numbers: %d\n", evenCount);
printf("Average of even numbers: %.2f\n", evenAvg);
printf("Total odd numbers: %d\n", oddCount);
printf("Average of odd numbers: %.2f\n", oddAvg);
Here, the program prints the results:

Total count of even numbers and their average.
Total count of odd numbers and their average.
%.2f is used to format the floating-point numbers to two decimal places.

// Determine who "won"
if (evenCount > oddCount) {
    printf("Yippee, the evens won!\n");
} else if (oddCount > evenCount) {
    printf("Wowee, the odds prevailed!\n");
} else {
    printf("Yikes, it was a tie!\n");
}
The program then compares the count of even and odd numbers to determine which group has more numbers:

If there are more even numbers, it prints "Yippee, the evens won!"
If there are more odd numbers, it prints "Wowee, the odds prevailed!"
If the count is the same, it prints "Yikes, it was a tie!"

return 0;
The return 0; statement signals that the program has executed successfully.

// end
This is a comment indicating the end of the program.

Summary:
The program accepts positive integers as input from the user.
It counts and sums both even and odd numbers separately.
Once the user enters 1212, it calculates and displays the total counts and averages for both even and odd numbers.
It finally announces which group (evens or odds) had more numbers, or if it was a tie.






