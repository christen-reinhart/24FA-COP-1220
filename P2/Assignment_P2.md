# !/usr/bin/env Program C
# Script name: Programming C P2
# Author Name: Christen Reinhart
# Date of Latest Revision: 08/30/2024
# Purpose: Print
# Input: Video Games
# Output: Print Video Games

2. Tracking Daily Temperatures for a Month

a) Fixed Size: The number of days in a month is constant, making an array suitable.
b) Sequential Storage: Temperatures are recorded in order, so an array is a natural choice.
c) Easy Aggregation: Arrays make it easy to compute averages or find trends like the highest or lowest temperature of the month.
https://github.com/christen-reinhart/24FA-COP-1220/blob/main/T3/DailyTemp.c

Example:
#include <stdio.h>

int main() {
    int temperatures[30];  // Array for daily temperatures
    double humidity[30];   // Array for daily humidity levels
    double rainfall[30];   // Array for daily rainfall levels
// ... (Input weather data for each day)
// Calculate average temperature
int sum_temp = 0;
for (int i = 0; i < 365; i++) {
    sum_temp += temperatures[i];
}
double avg_temp = (double)sum_temp / 365;
// ... (Similar calculations for humidity and rainfall)














