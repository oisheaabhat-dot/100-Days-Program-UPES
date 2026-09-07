#include <stdio.h>

int main() 
{
    double num1, num2, temp;

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

    // Swapping logic using a third variable (temp)
    temp = num1;   // Step 1: Save the value of num1 in temp
    num1 = num2;   // Step 2: Copy the value of num2 into num1
    num2 = temp;   // Step 3: Copy the saved value from temp into num2

    // Displaying values after swapping
    printf("\n--- After Swapping ---\n");
    printf("num1 = %.2lf\n", num1);
    printf("num2 = %.2lf\n", num2);

    return 0;
}
