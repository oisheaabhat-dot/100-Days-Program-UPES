#include <stdio.h>

int main() 
{
    int n, i;
    double sum = 0.0;
    double numerator = 2.0;
    double denominator = 3.0;

    // Input the number of terms from the user
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) 
    {
        sum += numerator / denominator;
        
        // Move to the next term
        numerator += 2.0;
        denominator += 4.0;
    }

    // Print the final sum
    printf("The sum of the series up to %d terms is: %lf\n", n, sum);

    return 0;
}
