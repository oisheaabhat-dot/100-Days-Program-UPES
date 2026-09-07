#include <stdio.h>

int main() 
{
    long long number;

    // Prompting the user for input
    printf("Enter an integer: ");
    if (scanf("%lld", &number) != 1) 
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Nested if-else logic to check the category of the number
    if (number != 0) 
    {
        // Nested block: Executed only if the number is not zero
        if (number > 0) 
        {
            printf("\nResult: %lld is a POSITIVE number.\n", number);
        } else {
            printf("\nResult: %lld is a NEGATIVE number.\n", number);
        }
    } 
    else 
    {
        // Executed only if the number is exactly zero
        printf("\nResult: The entered number is ZERO.\n");
    }

    return 0;
}
