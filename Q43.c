#include <stdio.h>


long long factorial(int n) 
{
    long long fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}


int isStrong(int num) 
{
    // Strong numbers are typically defined for positive integers
    if (num <= 0) 
    {
        return 0;
    }

    int originalNum = num;
    long long sum = 0;

    // Extract each digit and add its factorial to the sum
    while (num > 0) 
    {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Return 1 if sum of factorials matches the original number
    return (sum == originalNum);
}

int main() 
{
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Call the check function and print the result
    if (isStrong(number)) 
    {
        printf("%d is a strong number.\n", number);
    } 
    else 
    {
        printf("%d is NOT a strong number.\n", number);
    }

    return 0;
}
