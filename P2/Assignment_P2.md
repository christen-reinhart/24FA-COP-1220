# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

1. Storing and Analyzing Test Scores

a) Data Type Consistency: All test scores are of the same data type (e.g., integers or floats).

b) Indexed Access: Each student’s score can be accessed via an index, making it easy to loop through all scores.

c) Efficient Iteration: Arrays allow looping through scores to calculate the total, maximum, minimum, or average efficiently.

Example:

#define NUM_STUDENTS 30

int main() {
    float scores[NUM_STUDENTS] = {85.5, 90.0, 78.0, /*...*/};
    float sum = 0.0;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        sum += scores[i];
    }
    printf("Average Score: %.2f\n", sum / NUM_STUDENTS);
    return 0;
}

2. Tracking Daily Temperatures for a Month

a) Fixed Size: The number of days in a month is constant, making an array suitable.

b) Sequential Storage: Temperatures are recorded in order, so an array is a natural choice.

c) Easy Aggregation: Arrays make it easy to compute averages or find trends like the highest or lowest temperature of the month.

Example:

#define DAYS_IN_MONTH 30

int main() {
    int temperatures[DAYS_IN_MONTH] = {72, 74, 69, /*...*/};
    int total = 0, max = temperatures[0], min = temperatures[0];

    for (int i = 0; i < DAYS_IN_MONTH; i++) {
        total += temperatures[i];
        if (temperatures[i] > max) max = temperatures[i];
        if (temperatures[i] < min) min = temperatures[i];
    }
    printf("Average: %d, Max: %d, Min: %d\n", total / DAYS_IN_MONTH, max, min);
    return 0;
}

3. Managing a To-Do List of Fixed Size

a) Fixed Limit: The maximum number of tasks is predefined.

b) Random Access: Tasks can be accessed, updated, or deleted by their index.

c) Compact Representation: Arrays provide a compact way to store tasks of similar types (e.g., strings for task names).

Example:

#include <stdio.h>
#include <string.h>
#define MAX_TASKS 10
#define MAX_TASK_LENGTH 50

int main() {
    char tasks[MAX_TASKS][MAX_TASK_LENGTH] = {"Buy groceries", "Call John", /*...*/};
    for (int i = 0; i < MAX_TASKS && strlen(tasks[i]) > 0; i++) {
        printf("Task %d: %s\n", i + 1, tasks[i]);
    }
    return 0;
}
