#include <stdio.h>

#define MAX_ROWS 10 // Maximum row capacity
#define MAX_COLS 10 // Maximum column capacity

int main() 
{
    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int sumMatrix[MAX_ROWS][MAX_COLS];
    int rowsA, colsA, rowsB, colsB;
    int i, j;

    // 1. Input dimensions for Matrix A
    printf("Enter rows and columns for Matrix A (e.g., 3 3): ");
    if (scanf("%d %d", &rowsA, &colsA) != 2 || rowsA <= 0 || rowsA > MAX_ROWS || colsA <= 0 || colsA > MAX_COLS) 
    {
        printf("Invalid dimensions for Matrix A.\n");
        return 1;
    }

    // 2. Input dimensions for Matrix B
    printf("Enter rows and columns for Matrix B (e.g., 3 3): ");
    if (scanf("%d %d", &rowsB, &colsB) != 2 || rowsB <= 0 || rowsB > MAX_ROWS || colsB <= 0 || colsB > MAX_COLS) 
    {
        printf("Invalid dimensions for Matrix B.\n");
        return 1;
    }

    // 3. Mathematical Validation
    // Matrix addition requires both matrices to have identical dimensions
    if (rowsA != rowsB || colsA != colsB) 
    {
        printf("\nError: Matrices must have identical dimensions for addition!\n");
        printf("Matrix A: %d x %d | Matrix B: %d x %d\n", rowsA, colsA, rowsB, colsB);
        return 1;
    }

    // 4. Input elements of Matrix A
    printf("\nEnter elements for Matrix A (%d x %d):\n", rowsA, colsA);
    for (i = 0; i < rowsA; i++) 
    {
        for (j = 0; j < colsA; j++) 
        {
            printf("A[%d][%d]: ", i, j);
            if (scanf("%d", &matrixA[i][j]) != 1) 
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // 5. Input elements of Matrix B
    printf("\nEnter elements for Matrix B (%d x %d):\n", rowsB, colsB);
    for (i = 0; i < rowsB; i++) 
    {
        for (j = 0; j < colsB; j++) 
        {
            printf("B[%d][%d]: ", i, j);
            if (scanf("%d", &matrixB[i][j]) != 1) 
            {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // 6. Perform Addition
    for (i = 0; i < rowsA; i++) 
    {
        for (j = 0; j < colsA; j++) 
        {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // 7. Output Results
    printf("\n--- Matrix A ---\n");
    for (i = 0; i < rowsA; i++) 
    {
        for (j = 0; j < colsA; j++) 
        {
            printf("%4d ", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Matrix B ---\n");
    for (i = 0; i < rowsB; i++) 
    {
        for (j = 0; j < colsB; j++) 
        {
            printf("%4d ", matrixB[i][j]);
        }
        printf("\n");
    }

    printf("\n=====================\n");
    printf("Resultant Sum Matrix (%d x %d)\n", rowsA, colsA);
    printf("=====================\n");
    for (i = 0; i < rowsA; i++) 
    {
        for (j = 0; j < colsA; j++) 
        {
            printf("%4d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
