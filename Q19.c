#include <stdio.h>

int main() 
{
    double side1, side2, side3;

    // Prompt user for input
    printf("Enter the lengths of the three sides of the triangle:\n");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) 
    {
        printf("Error: Invalid input. Please enter numerical values.\n");
        return 1;
    }

    // Check for physical validity (sides must be positive numbers)
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) 
    {
        printf("Error: Side lengths must be greater than zero.\n");
        return 1;
    }

    // Check Triangle Inequality Theorem: sum of two sides must be greater than the third
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) 
    {
        
        // Classify based on equal sides
        if (side1 == side2 && side2 == side3) 
        {
            printf("The triangle is Equilateral.\n");
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) 
        {
            printf("The triangle is Isosceles.\n");
        } 
        else 
        {
            printf("The triangle is Scalene.\n");
        }
        
    } 
    else 
    {
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0;
}
