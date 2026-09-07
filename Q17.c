#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() 
{
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Prompt user for coefficients
    printf("Enter coefficients a, b, and c (separated by spaces): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Error: Invalid input. Please enter numbers.\n");
        return 1;
    }

    // A quadratic equation must have a non-zero leading coefficient 'a'
    if (a == 0) 
    {
        printf("Error: 'a' cannot be 0. This is a linear equation, not quadratic.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);

    // Categorize roots based on the discriminant
    if (discriminant > 0) 
    {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: REAL AND DISTINCT\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) 
    {
        // One real and repeated root
        root1 = root2 = -b / (2 * a);
        printf("Roots are: REAL AND REPEATED (EQUAL)\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else 
    {
        // Two complex (imaginary) roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: COMPLEX AND IMAGINARY\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}
