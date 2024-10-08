// !/usr/bin/env Program C
// Script name: Programming C P2 Current Age
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/03/2024
// Purpose: Print
// Input: Dates
// Output: Print Future Age

#include <stdio.h>

int main() {
    int currentAge = 46; // This is my current age
    int futureYear = 2037; // I will be 59 in this year
    int currentYear = 2024;
    int futureAge = currentAge + (futureYear - currentYear);
    
    printf("In the year %d, I will be %d years old.\n", futureYear, futureAge);
    
    return 0;
}

// end
