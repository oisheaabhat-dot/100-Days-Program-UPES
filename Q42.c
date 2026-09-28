#include <stdio.h>


int isPerfect(int num) 
{
    // Perfect numbers must be positive integers greater than 1
    if (num <= 1) 
    {
        return 0; 
    }

    int sum = 0;

    // Find proper divisors and sum them up
    // only need to loop up to num/2 as no proper divisor can be larger than that
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }

    // If the sum of proper divisors equals the original number, it is perfect
    if (sum == num) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
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

    // Call the check function and display the result
    if (isPerfect(number)) 
    {
        printf("%d IS a perfect number.\n", number);
    } 
    else 
    {
        printf("%d is NOT a perfect number.\n", number);
    }

    return 0;
}
