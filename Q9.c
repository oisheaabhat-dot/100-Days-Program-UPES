#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() 
{
    double principal, rate, time;
    double simpleInterest, compoundInterest, totalAmount;

    // Prompting for input values
    printf("Enter the Principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal <= 0) 
    {
        printf("Error: Invalid principal amount. Must be positive.\n");
        return 1;
    }

    printf("Enter the Annual Interest Rate (in percentage): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) 
    {
        printf("Error: Invalid interest rate. Must be non-negative.\n");
        return 1;
    }

    printf("Enter the Time period (in years): ");
    if (scanf("%lf", &time) != 1 || time <= 0) 
    {
        printf("Error: Invalid time period. Must be positive.\n");
        return 1;
    }

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Calculating Compound Interest (compounded annually)
    // Formula: Total Amount = P * (1 + R/100)^T
    totalAmount = principal * pow((1.0 + (rate / 100.0)), time);
    compoundInterest = totalAmount - principal;

    // Displaying the results
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount:    $%.2lf\n", principal);
    printf("Annual Rate:          %.2lf%%\n", rate);
    printf("Time Period:          %.2lf years\n", time);
    printf("------------------------------------\n");
    printf("Simple Interest:     $%.2lf (Total Value: $%.2lf)\n", 
           simpleInterest, principal + simpleInterest);
    printf("Compound Interest:   $%.2lf (Total Value: $%.2lf)\n", 
           compoundInterest, totalAmount);

    return 0;
}
