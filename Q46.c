#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    int columns = 5;

    // Outer loop to iterate through rows
    for (i = 0; i < rows; i++) {
        // Inner loop to print asterisks in each row
        for (j = 0; j < columns; j++) {
            printf("*");
        }
        // Move to the next line after printing all columns in a row
        printf("\n");
    }

    return 0;
}
