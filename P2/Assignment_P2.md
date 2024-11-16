# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

3. Managing a To-Do List of Fixed Size

a) Fixed Limit: The maximum number of tasks is predefined.
b) Random Access: Their index can access, update, or delete tasks.
c) Compact Representation: Arrays provide a compact way to store tasks of similar types (e.g., strings for task names).
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/ToDoList.c

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















