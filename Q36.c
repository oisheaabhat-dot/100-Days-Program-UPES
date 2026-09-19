#include <stdio.h>

// Function to find HCF/GCD of two numbers using recursion
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

int main() 
{
    int num1, num2, hcf;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) 
    {
        printf("Invalid input. Please enter integers.\n");
        return 1;
    }

    // Handle negative numbers by converting them to positive
    int temp1 = (num1 < 0) ? -num1 : num1;
    int temp2 = (num2 < 0) ? -num2 : num2;

    hcf = findHCF(temp1, temp2);

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
