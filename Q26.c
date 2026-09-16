#include <stdio.h>

int main() 
{
    int n;

    // Prompt the user for input
    printf("Enter a positive integer (n): ");
    
    // Check if the input is a valid integer
    if (scanf("%d", &n) != 1) 
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Guard against non-positive limits
    if (n < 1) 
    {
        printf("Error: The value of n must be 1 or greater.\n");
        return 1;
    }

    // Print numbers from 1 to n
    printf("\nPrinting numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", i);
    }
    printf("\n"); // Print a final newline for neat terminal output

    return 0;
}
