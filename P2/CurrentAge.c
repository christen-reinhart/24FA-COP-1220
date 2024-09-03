// !/usr/bin/env Program C
// Script name: Programming C P2 Video Games
// Author Name: Christen Reinhart
// Date of Latest Revision: 09/03/2024
// Purpose: Print
// Input: Video Games
// Output: Print Video Games

#include <stdio.h>

int main() {
    int currentAge = 25; // You can replace 25 with your current age
    int futureYear = 2037;
    int currentYear = 2024;
    int futureAge = currentAge + (futureYear - currentYear);
    
    printf("In the year %d, you will be %d years old.\n", futureYear, futureAge);
    
    return 0;
}

// end
