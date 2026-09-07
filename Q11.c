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

    // Checking if the number is divisible by 2
    if (number % 2 == 0) 
    {
        printf("\nResult: %lld is an EVEN number.\n", number);
    } 
    else 
    {
        printf("\nResult: %lld is an ODD number.\n", number);
    }

    return 0;
}
