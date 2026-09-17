#include <stdio.h>

int main() 
{
    char operator;
    double num1, num2, result;

    // Displaying menu options
    printf("=== Basic Calculator ===\n");
    printf("Supported operations: + (Add), - (Subtract), * (Multiply), / (Divide), %% (Modulo)\n\n");

    // Input operator
    printf("Enter an operator (+, -, *, /, %%): ");
    if (scanf(" %c", &operator) != 1) 
    {
        printf("Error: Failed to read the operator.\n");
        return 1;
    }

    // Input operands
    printf("Enter two numbers (separated by space): ");
    if (scanf("%lf %lf", &num1, &num2) != 2) 
    {
        printf("Error: Invalid numeric inputs.\n");
        return 1;
    }

    // Perform calculation based on operator
    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Division by zero guard
            if (num2 == 0) {
                printf("\nError: Division by zero is mathematically undefined.\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.4lf\n", num1, num2, result);
            }
            break;

        case '%':
            // Modulo by zero guard & cast to integers
            if ((int)num2 == 0) {
                printf("\nError: Modulo by zero is mathematically undefined.\n");
            } 
            else 
            {
                // casting to int as C's % operator requires integer operands
                int int_num1 = (int)num1;
                int int_num2 = (int)num2;
                int mod_result = int_num1 % int_num2;
                printf("\nResult (using integer cast): %d %% %d = %d\n", int_num1, int_num2, mod_result);
                printf("(Note: Fractional parts were discarded to perform modulo)\n");
            }
            break;

        default:
            printf("\nError: '%c' is not a supported operator.\n", operator);
            break;
    }

    printf("================================\n");
    return 0;
}
