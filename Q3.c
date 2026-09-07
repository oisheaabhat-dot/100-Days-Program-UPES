#include <stdio.h>

int main() 
{
    double length, breadth;
    double area, perimeter;

    // Prompting the user for input
    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1) 
    {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    printf("Enter the breadth of the rectangle: ");
    if (scanf("%lf", &breadth) != 1) 
    {
        printf("Error: Invalid input. Please enter a numerical value.\n");
        return 1;
    }

    // Input validation: dimensions must be positive
    if (length <= 0 || breadth <= 0) 
    {
        printf("Error: Dimensions must be greater than zero.\n");
        return 1;
    }

    // Performing calculations
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Displaying results
    printf("\n--- Rectangle Properties ---\n");
    printf("Length:    %.2lf\n", length);
    printf("Breadth:   %.2lf\n", breadth);
    printf("Area:      %.2lf square units\n", area);
    printf("Perimeter: %.2lf units\n", perimeter);

    return 0;
}
