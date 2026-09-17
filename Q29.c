#include <stdio.h>

int main() 
{
    int n;
    unsigned long long factorial = 1;

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) 
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Check for negative numbers
    if (n < 0) 
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } 
    else if (n > 20) 
    {
        // Warning for standard integer overflow
        printf("Error: Input too large. Factorial of %d will overflow 64-bit integer limits (max n = 20).\n", n);
    } 
    else 
    {
        // Calculate factorial iteratively
        for (int i = 1; i <= n; ++i) 
        {
            factorial *= i;
        }
        printf("The factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}
