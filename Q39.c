#include <stdio.h>

// Function to calculate the product of odd digits
int getProductOfOddDigits(int num) 
{
    int product = 1;
    int hasOddDigit = 0; // Flag to check if the number contains any odd digits

    // Handle negative numbers by converting them to positive
    if (num < 0) 
    {
        num = -num;
    }

    // Special case for 0 (0 is even, so no odd digits)
    if (num == 0) 
    {
        return 0;
    }

    while (num > 0) 
    {
        int digit = num % 10; // Extract the last digit

        // Check if the digit is odd
        if (digit % 2 != 0) 
        {
            product *= digit;
            hasOddDigit = 1; // Mark that we found at least one odd digit
        }

        num /= 10; // Remove the last digit
    }

    // If no odd digits were found, product should logically be 0
    return hasOddDigit ? product : 0;
}

int main() 
{
    int number, product;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    product = getProductOfOddDigits(number);

    if (product == 0) 
    {
        printf("There are no odd digits in the number %d.\n", number);
    } 
    else 
    {
        printf("The product of the odd digits of %d is: %d\n", number, product);
    }

    return 0;
}
