#include <stdio.h>

// Helper function to calculate HCF using Euclidean Algorithm
int findHCF(int a, int b) 
{
    if (b != 0) 
    {
        return findHCF(b, a % b);
    } 
    else 
    {
        return a;
    }
}

// Function to calculate LCM
int findLCM(int a, int b) 
{
    // Handle division by zero case if both numbers are zero
    if (a == 0 || b == 0) 
    {
        return 0;
    }
    
    // Get absolute values to handle negative inputs
    int absA = (a < 0) ? -a : a;
    int absB = (b < 0) ? -b : b;
    
    // Calculate LCM using the formula: (a * b) / HCF
    // We divide first to prevent integer overflow during multiplication
    return (absA / findHCF(absA, absB)) * absB;
}

int main() 
{
    int num1, num2, lcm;

    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) 
    {
        printf("Invalid input. Please enter integers.\n");
        return 1;
    }

    lcm = findLCM(num1, num2);

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
