#include <stdio.h>

// Function to calculate the sum of digits
int getSumOfDigits(int num) 
{
    int sum = 0;

    // Handle negative numbers by converting them to positive
    if (num < 0) 
    {
        num = -num;
    }

    while (num > 0) 
    {
        sum += num % 10;  // Extract the last digit and add it to sum
        num /= 10;        // Remove the last digit from the number
    }

    return sum;
}

int main() 
{
    int number, sum;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    sum = getSumOfDigits(number);

    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
}
