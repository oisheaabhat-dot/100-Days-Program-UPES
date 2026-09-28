#include <stdio.h>


double calculateSeriesSum(int n) 
{
    if (n <= 0) 
    {
        return 0.0;
    }

    // The first term is explicitly 1
    double sum = 1.0; 

    // Loop starts from the 2nd term up to the n-th term
    for (int i = 2; i <= n; i++) 
    {
        double numerator = (2 * i) - 1;
        double denominator = 2 * i;
        
        // Add the fraction to the running sum
        sum += (numerator / denominator);
    }

    return sum;
}

int main() 
{
    int n;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid input! Please enter a positive integer greater than 0.\n");
        return 1;
    }

    double totalSum = calculateSeriesSum(n);

    // Print the final result with 6 decimal places of precision
    printf("The sum of the series up to %d terms is: %.6lf\n", n, totalSum);

    return 0;
}
