#include <stdio.h>

int main() 
{
    float units, bill_amount = 0.0;

    // Prompting user for input
    printf("Enter the total electricity units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) 
    {
        printf("Error: Please enter a valid non-negative number of units.\n");
        return 1;
    }

    // Applying progressive slab rates
    if (units <= 100) 
    {
        bill_amount = units * 5;
    } 
    else if (units <= 200) 
    {
        bill_amount = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) 
    {
        bill_amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else 
    {
        bill_amount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Displaying the breakdown and final bill
    printf("\n--- Bill Details ---\n");
    printf("Total Units Consumed: %.2f units\n", units);
    printf("Total Bill Amount:    $%.2f\n", bill_amount);
    printf("--------------------\n");

    return 0;
}
