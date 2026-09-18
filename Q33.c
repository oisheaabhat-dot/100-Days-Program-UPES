#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) 
{
    int temp = num;
    int sum = 0;
    int digits = 0;

    // Step 1: Count the number of digits
    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp to the original number

    // Step 2: Calculate the sum of digits raised to the power of 'digits'
    while (temp != 0) 
    {
        int remainder = temp % 10;
        // round() is used to prevent precision loss issues with pow()
        sum += round(pow(remainder, digits)); 
        temp /= 10;
    }

    // Step 3: Check if the sum equals the original number
    return (sum == num);
}

int main() 
{
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Negative numbers are not considered Armstrong numbers in standard definitions
    if (number < 0) 
    {
        printf("%d is not an Armstrong number.\n", number);
    } 
    else if (isArmstrong(number)) 
    {
        printf("%d is an Armstrong number.\n", number);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
