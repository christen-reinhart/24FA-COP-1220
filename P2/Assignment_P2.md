# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

1. Design:

I started by understanding the task: I needed an array whose size is the number of characters in "Christen Reinhart" (15 characters). I also had to allow the user to enter integer values, calculate the total and average, and display the results.

I used a constant ARRAY_SIZE to define the array size.

I planned two loops:

One for getting user input and calculating the total.
Another to display the array, total, and average.

2. Coding:

I defined an array with size 15.
For input, I used a loop to get values from the user, making sure only integers were allowed.

I accumulated the total as values were entered.
After collecting the values, I calculated the average.
Finally, I used another loop to print the array, total, and average.

3. Testing:

I tested by entering different numbers to check if the total and average were correct.

I also tried entering invalid input (like letters) to make sure the program only accepted numbers.

Challenges:

Input Validation: Initially, the program accepted wrong inputs, but I fixed that by adding checks to ensure only integers could be entered.

Formatting: I made sure the output looked clean and easy to read by using spaces and line breaks.