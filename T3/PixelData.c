// #/!/usr/bin/env Program C
// Script name: Programming C T3 PixelData.c
// Author Name: Christen Reinhart
// Date of Latest Revision: 11/16/2024
// Purpose: Store Data
// Input: Integers
// Output: Data Table

#include <stdio.h>

int main() {
    int image[5][5] = {
        {0, 50, 100, 150, 200},
        {20, 70, 120, 170, 220},
        {40, 90, 140, 190, 240},
        {60, 110, 160, 210, 255},
        {80, 130, 180, 230, 255}
    };

    // Display pixel intensity data
    printf("Pixel Intensity Data:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//end