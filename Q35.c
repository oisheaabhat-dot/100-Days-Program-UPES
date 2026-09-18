#include <stdio.h>
#include <math.h>

// Function to print all factors of a number
void printFactors(int num) 
{
    if (num <= 0) 
    {
        printf("Factors are only defined for positive integers.\n");
        return;
    }

    printf("The factors of %d are:\n", num);

    // Step 1: Print factors less than or equal to the square root of num
    int limit = (int)sqrt(num);
    for (int i = 1; i <= limit; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }

    // Step 2: Print corresponding larger factors in reverse order
    // We start from the limit and go down to 1 to keep the output clean
    for (int i = limit; i >= 1; i--) 
    {
        if (num % i == 0) 
        {
            int partner = num / i;
            // Avoid printing the square root twice (e.g., 6*6 = 36)
            if (partner != i) 
            {
                printf("%d ", partner);
            }
        }
    }
    printf("\n");
}

int main() 
{
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0) 
    {
        printf("Invalid input! Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printFactors(number);

    return 0;
}
