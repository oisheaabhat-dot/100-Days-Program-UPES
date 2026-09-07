#include <stdio.h>

int main() 
{
    double celsius, fahrenheit;

    // Prompting the user for input
    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) 
    {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    // Applying the conversion formula
    // Note: Using 9.0 and 5.0 ensures floating-point division
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Displaying the results
    printf("\n--- Temperature Conversion ---\n");
    printf("%.2lf°C is equal to %.2lf°F\n", celsius, fahrenheit);

    return 0;
}
