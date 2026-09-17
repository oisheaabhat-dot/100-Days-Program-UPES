#include <stdio.h>

int main() 
{
    int n;
    unsigned long long product = 1;
    int even_found = 0;

    // Prompt user for input
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Calculate product of even numbers
    for (int i = 2; i <= n; i += 2) 
    {
        product *= i;
        even_found = 1;
    }

    // Print the result
    if (even_found && n >= 2) 
    {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } 
    else 
    {
        printf("There are no even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}
