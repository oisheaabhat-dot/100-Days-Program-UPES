#include <stdio.h>

// Defining the constant value of PI
#define PI 3.14159265358979323846

int main() 
{
    double radius;
    double area, circumference;

    // Prompting the user for the radius
    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) 
    {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    // Input validation: radius must be positive
    if (radius <= 0) 
    {
        printf("Error: Radius must be greater than zero.\n");
        return 1;
    }

    // Performing calculations
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Displaying results
    printf("\n--- Circle Properties ---\n");
    printf("Radius:        %.4lf\n", radius);
    printf("Area:          %.4lf square units\n", area);
    printf("Circumference: %.4lf units\n", circumference);

    return 0;
}
