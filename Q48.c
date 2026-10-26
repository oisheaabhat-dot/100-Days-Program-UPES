#include <stdio.h>

int main() 
{
    int i, j;
    int rows = 5;

    // Outer loop to iterate through the rows
    for (i = 1; i <= rows; i++) 
    {
        // Inner loop to print the numbers in each row
        // It runs from 1 up to the current row number 'i'
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        // Move to the next line after printing the numbers for the current row
        printf("\n");
    }

    return 0;
}
