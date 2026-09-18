#include <stdio.h>

int main() 
{
    int originalNumber, tempNumber, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%d", &originalNumber) != 1) 
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (originalNumber < 0) 
    {
        printf("%d is not a palindrome.\n", originalNumber);
        return 0;
    }

    tempNumber = originalNumber;

    // Reverse the digits of the number
    while (tempNumber != 0) 
    {
        remainder = tempNumber % 10;
        
        // Prevent integer overflow before updating reversedNumber
        if (reversedNumber > (2147483647 - remainder) / 10) 
        {
            printf("Integer overflow detected. The number is too large to process.\n");
            return 1;
        }
        
        reversedNumber = reversedNumber * 10 + remainder;
        tempNumber /= 10;
    }

    // Check if the original number and reversed number are identical
    if (originalNumber == reversedNumber) 
    {
        printf("%d is a palindrome.\n", originalNumber);
    } 
    else 
    {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
