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
T3
20241126

This is the third Theory assignment (see syllabus). For this assignment, you will not be writing code. Instead, you will write sentences and paragraphs to answer the items below. When preparing your responses, please spell-check and grammar-check your work. Make sure your work has a professional appearance. Be thorough and detailed as you answer the questions. You should use various sources as you gather information. Be sure that you do NOT copy and paste from these sources. Instead, synthesize the information and present it using your own words. You must CITE (using any format) the sources you use. Number your responses and separate the paragraphs so that I can easily figure out which of your responses go with which questions.

Q1: Provide three specific examples of when you might use arrays in your C programs. It should be clear from the examples you give that they would be best approached by using arrays (give details to make it clear why arrays would be appropriate).

1. Storing and Analyzing Test Scores

a) Data Type Consistency: All test scores are of the same data type (e.g., integers or floats).
b) Indexed Access: Each student’s score can be accessed via an index, making it easy to loop through all scores.
c) Efficient Iteration: Arrays allow looping through scores to calculate the total, maximum, minimum, or average efficiently.
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/TestScores.c

Example:
int grades[10]; // Array to store 10 grades
// Input grades
for (int i = 0; i < 10; i++) {
    printf("Enter grade %d: ", i+1);
    scanf("%d", &grades[i]);
}
// Calculate average
int sum = 0;
for (int i = 0; i < 10; i++) {
    sum += grades[i];
}
double average = (double)sum / 10;
printf("Average grade: %.2f\n", average);













