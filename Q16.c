#include <stdio.h>

int main() 
{
    double num1, num2, num3;

    // Prompt user to enter three numbers
    printf("Enter three numbers (separated by spaces): ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Conditional check using logical AND (&&)
    if (num1 >= num2 && num1 >= num3) 
    {
        printf("The largest number is %.2f\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) 
    {
        printf("The largest number is %.2f\n", num2);
    } 
    
    else 
    {
        printf("The largest number is %.2f\n", num3);
    }

    return 0;
}
