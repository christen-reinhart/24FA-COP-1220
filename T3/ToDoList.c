#include <stdio.h>
#include <string.h>
#define MAX_TASKS 10
#define MAX_TASK_LENGTH 50

// Function to swap two integers
void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap two strings
void swap_str(char str1[], char str2[]) {
    char temp[MAX_TASK_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    // Predefined tasks and priorities
    char tasks[MAX_TASKS][MAX_TASK_LENGTH] = {
        "Buy groceries", "Call John", "Complete project",
        "Clean the house", "Pay bills", "Schedule appointment",
        "Read book", "Exercise", "Fix the sink", "Plan vacation"
    };

    int priorities[MAX_TASKS] = {2, 1, 3, 2, 1, 2, 3, 1, 3, 2}; // 1 = high, 2 = medium, 3 = low

    // Sort tasks by priority using bubble sort
    for (int i = 0; i < MAX_TASKS - 1; i++) {
        for (int j = 0; j < MAX_TASKS - i - 1; j++) {
            if (priorities[j] > priorities[j + 1]) {
                // Swap priorities
                swap_int(&priorities[j], &priorities[j + 1]);
                // Swap corresponding tasks
                swap_str(tasks[j], tasks[j + 1]);
            }
        }
    }

    // Print tasks in order of priority
    printf("Tasks sorted by priority:\n");
    for (int i = 0; i < MAX_TASKS; i++) {
        printf("Task %d: %s (Priority: %d)\n", i + 1, tasks[i], priorities[i]);
    }

    return 0;
}

//end
