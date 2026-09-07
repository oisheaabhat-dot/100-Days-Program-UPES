#include <stdio.h>

int main() 
{
    long long n;
    long long sum;

    // Prompting the user for input
    printf("Enter a positive integer (n): ");
    if (scanf("%lld", &n) != 1) 
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Input validation: Natural numbers start from 1
    if (n < 1) 
    {
        printf("Error: Please enter a positive integer starting from 1.\n");
        return 1;
    }

    // Calculating the sum using the mathematical formula: n * (n + 1) / 2
    // Using formula is O(1) time complexity compared to O(n) loop
    sum = (n * (n + 1)) / 2;

    // Displaying the result
    printf("\n--- Result ---\n");
    printf("The sum of the first %lld natural numbers is: %lld\n", n, sum);

    return 0;
}
