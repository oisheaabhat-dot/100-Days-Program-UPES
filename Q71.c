#include <stdio.h>

#define MAX_ROWS 10 // Maximum row capacity
#define MAX_COLS 10 // Maximum column capacity

int main() 
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, i, j;

    // 1. Input and validate the matrix dimensions
    printf("Enter the number of rows (1 to %d): ", MAX_ROWS);
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > MAX_ROWS) 
    {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter the number of columns (1 to %d): ", MAX_COLS);
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > MAX_COLS) 
    {
        printf("Invalid number of columns.\n");
        return 1;
    }

    // 2. Input the matrix elements
    printf("\nEnter elements for a %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            if (scanf("%d", &matrix[i][j]) != 1) 
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // 3. Print the formatted matrix
    printf("\n--- Entered Matrix (%d x %d) ---\n", rows, cols);
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            // Using %4d to align columns nicely (adjust width as needed)
            printf("%4d ", matrix[i][j]);
        }
        printf("\n"); // Newline at the end of each row
    }

    return 0;
}
