#include <stdio.h>

int main() 
{
    double num1, num2;
    double sum, difference, product, quotient;

    // Prompting the user for input
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) 
    {
        printf("Error: Invalid input. Please enter numerical values.\n");
        return 1;
    }

    // Performing calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Displaying results
    printf("\n--- Results ---\n");
    printf("Sum:        %.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("Difference: %.2lf - %.2lf = %.2lf\n", num1, num2, difference);
    printf("Product:    %.2lf * %.2lf = %.2lf\n", num1, num2, product);

    // Handling division by zero
    if (num2 != 0.0) 
    {
        quotient = num1 / num2;
        printf("Quotient:   %.2lf / %.2lf = %.2lf\n", num1, num2, quotient);
    } 
    else 
    {
        printf("Quotient:   Division by zero is undefined!\n");
    }

    return 0;
}
