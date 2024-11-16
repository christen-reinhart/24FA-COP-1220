#include <stdio.h>

int main() {
    int temperatures[30];  // Array for daily temperatures
    double humidity[30];   // Array for daily humidity levels
    double rainfall[30];   // Array for daily rainfall levels

    // Example: Input weather data for each day
    for (int i = 0; i < 30; i++) {
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%d", &temperatures[i]);
        printf("Enter humidity for day %d: ", i + 1);
        scanf("%lf", &humidity[i]);
        printf("Enter rainfall for day %d: ", i + 1);
        scanf("%lf", &rainfall[i]);
    }

    // Calculate average temperature
    int sum_temp = 0;
    for (int i = 0; i < 30; i++) {
        sum_temp += temperatures[i];
    }
    double avg_temp = (double)sum_temp / 30;
    printf("Average Temperature for the Month: %.2f\n", avg_temp);

    // Find the highest and lowest temperature
    int max_temp = temperatures[0];
    int min_temp = temperatures[0];
    for (int i = 1; i < 30; i++) {
        if (temperatures[i] > max_temp) {
            max_temp = temperatures[i];
        }
        if (temperatures[i] < min_temp) {
            min_temp = temperatures[i];
        }
    }
    printf("Highest Temperature: %d\n", max_temp);
    printf("Lowest Temperature: %d\n", min_temp);

    return 0;
}

//end
