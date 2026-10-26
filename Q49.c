#include <stdio.h>

int main() 
{
    int i, j;
    int rows = 5;

    // Outer loop to iterate through the rows, starting from 5 down to 1
    for (i = rows; i >= 1; i--) 
    {
        // Inner loop to print the numbers in each row.
        // It starts from the current row number 'i' and goes up to 5.
        for (j = i; j <= rows; j++) 
        {
            printf("%d", j);
        }
        // Move to the next line after printing the numbers for the current row
        printf("\n");
    }

    return 0;
}
