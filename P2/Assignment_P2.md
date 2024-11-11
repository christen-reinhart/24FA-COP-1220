# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

Christen Reinhart 
Professor Cameron Spears
COP-1220-93444 Programming in C 
T2
20241119

This is the second Theory assignment (see syllabus). For this assignment, you will not be writing code. Instead, you will write sentences and paragraphs to answer the items below. When preparing your responses, please spell-check and grammar-check your work. Make sure your work has a professional appearance. Be thorough and detailed as you answer the questions. You should use various sources as you gather information. Be sure that you do NOT copy and paste from these sources. Instead, synthesize the information and present it using your own words. You must CITE (using any format) the sources you use. Number your responses and separate the paragraphs so that I can easily figure out which of your responses go with which questions.

Q1: Provide three specific examples of when you might use functions in your C programs. It should be clear from the examples you give that they would be best approached by using functions (give details to make it clear why functions, rather than "monolithic code" would be appropriate).

A1. Modularizing a Program for Reusability: Suppose you're writing a program that calculates the areas of different shapes (circle, square, rectangle). You can create a separate function for each shape calculation (e.g., calcCircleArea(), calcSquareArea(), calcRectangleArea()), which makes the code easier to maintain and reuse. If you later decide to add new shapes, you can do so by simply adding more functions without rewriting the entire program.

A2. Reducing Code Redundancy: In a program that requires repetitive tasks, such as processing user inputs or validating data, you can create a function like validateInput() that handles all the input checks in one place. This avoids duplicating code across multiple parts of the program and makes it easier to fix or update input validation logic.

A3. Handling Complex Calculations: In a program performing complex mathematical operations, like finding the factorial of a number, using recursion could make the code more efficient. Instead of writing a long monolithic block of code to perform the factorial, a recursive function factorial() can be used, which makes the program cleaner and easier to follow.

Q2: Find a C program on the web that uses many functions. Give a link to the program’s source code and tell what the program does. Copy and paste the headings of at least two functions from the program and tell briefly what the functions do.

A1. Link to Source Code: You can find C programs with multiple functions on GitHub, open-source repositories, or educational websites like GeeksforGeeks or Stack Overflow. Here's an example of a program that uses multiple functions:

Example Link: C Program for a Calculator

Function Headings: 
Here are two function headings from the program:
c
Copy code
void add() {
    // Code to add 2 integers
}

void subtract() {
    // Code to subtract 2 integers
}
A2. The add() function adds 2 integers and provides the end result, and the subtract() function subtracts two integers and displays the result. Both functions are part of a simplified calculator, making the code easier to debug/modularize each task.

Q3: A C function can be tiny or huge. Do a little research (suggested keywords: c ideal function size) and provide some information/guidelines related to recommended C function sizes. What disadvantages are there, if any, to very large functions?

In general, most references recommend keeping functions small and focused on a single task. The ideal function size should be  around 10 - 40 lines of code. Functions should be single purpose, and they should do one task well and avoid trying to handle to many things at once. This improves readability and maintainance of the code.

Disadvantages of Large Functions:

A1. Decreased Readability: A function that is too large becomes harder to understand. It's easier for developers to follow smaller, well-named functions than a huge block of code that performs multiple tasks.
A2. Increased Complexity: Large functions can increase the cognitive load on developers, making it difficult to track variables, debug, and manage the logic within the function.
A3. Reduced Reusability: Large functions that attempt to handle multiple things often become less flexible and harder to reuse in different contexts.

Q4: At this point in the course, what do you like about C? What do you dislike?

Positives:

A1. Efficiency and Control: C provides more direct control over system resources and memory, which makes for more effective programming, especially in critical applications like embedded systems.
A2. Portability: C programs require less modification and can be compiled and run on many different platforms, making it a flexible coding language for multiple platform development.

Negatives:

A3. Manual Memory Management: C requires the programmer to manually allocate and deallocate memory using malloc() and free(), which can lead to bugs like memory leaks and segmentation faults.
A4. Limited standardized libraries: When compared to higher-level languages like Python or Java, C has less of a set of built-in libraries, which means that often you need to write more code to accomplish certain projects.




