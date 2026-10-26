#include <stdio.h>

int main() 
{
    int i, j;
    int rows = 5;

    // Outer loop to iterate through rows
    for (i = 1; i <= rows; i++) 
    {
        // Inner loop to print asterisks. The number of asterisks
        // in each row is equal to the current row number 'i'.
        for (j = 1; j <= i; j++) 
        {
            printf("*");
        }
        // Move to the next line after the inner loop is done
        printf("\n");
    }

    return 0;
}
