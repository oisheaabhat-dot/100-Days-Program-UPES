#include <stdio.h>

int main() 
{
    long long n; // Using long long to handle larger inputs and prevent overflow
    long long loop_sum = 0;
    long long formula_sum = 0;

    // Prompt the user for input
    printf("Enter the count of odd numbers (n): ");
    if (scanf("%lld", &n) != 1) 
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Input Validation: n must be positive
    if (n <= 0) 
    {
        printf("Error: The count (n) must be a positive integer greater than 0.\n");
        return 1;
    }

    // Method 1: Iterative Loop (Generates and adds the first n odd numbers)
    // The i-th odd number is given by: (2 * i - 1)
    printf("\nThe first %lld odd numbers are:\n", n);
    for (long long i = 1; i <= n; i++) 
    {
        long long current_odd = 2 * i - 1;
        
        // Print individual numbers (only if n is reasonably small to keep terminal clean)
        if (n <= 20) 
        {
            printf("%lld ", current_odd);
        }
        
        loop_sum += current_odd;
    }
    if (n <= 20) 
    {
        printf("\n");
    } 
    else 
    {
        printf("[List omitted because n is too large]\n");
    }

    // Method 2: Mathematical Formula (n * n)
    formula_sum = n * n;

    // Displaying Results
    printf("\n--- Results ---\n");
    printf("Sum calculated using Loop:    %lld\n", loop_sum);
    printf("Sum calculated using Formula: %lld\n", formula_sum);
    printf("----------------\n");

    return 0;
}
