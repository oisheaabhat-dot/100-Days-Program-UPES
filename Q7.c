#include <stdio.h>

int main() 
{
    double num1, num2;

    // Prompting the user for two numbers
    printf("Enter the first number (num1): ");
    if (scanf("%lf", &num1) != 1) 
    {
        printf("Error: Invalid input.\n");
        return 1;
    }

    printf("Enter the second number (num2): ");
    if (scanf("%lf", &num2) != 1) 
    {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // Displaying values before swapping
    printf("\n--- Before Swapping ---\n");
    printf("num1 = %.2lf\n", num1);
    printf("num2 = %.2lf\n", num2);

    // Swapping logic without a third variable
    num1 = num1 + num2;   // Step 1: num1 now holds the sum of both numbers
    num2 = num1 - num2;   // Step 2: num2 gets the original value of num1
    num1 = num1 - num2;   // Step 3: num1 gets the original value of num2

    // Displaying values after swapping
    printf("\n--- After Swapping ---\n");
    printf("num1 = %.2lf\n", num1);
    printf("num2 = %.2lf\n", num2);

    return 0;
}
