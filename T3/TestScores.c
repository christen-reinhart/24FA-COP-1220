#include <stdio.h>

int main() {
    int grades[10];  // Array to store 10 grades

    // Input grades
    for (int i = 0; i < 10; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    // Calculate total, average, highest, and lowest scores
    int sum = 0, max = grades[0], min = grades[0];

    for (int i = 0; i < 10; i++) {
        sum += grades[i];
        if (grades[i] > max) {
            max = grades[i];
        }
        if (grades[i] < min) {
            min = grades[i];
        }
    }

    double average = (double)sum / 10;

    // Display results
    printf("\nResults:\n");
    printf("Average grade: %.2f\n", average);
    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);

    return 0;
}

//end
