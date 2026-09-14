#include <stdio.h>

int main() 
{
    int days;
    float fine = 0.0;

    // Input the number of days late
    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) 
    {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }

    // Determine fine or membership status
    if (days > 30) 
    {
        printf("\nLate for more than 30 days (%d days). Membership Cancelled!\n", days);
    } 
    else 
    {
        if (days <= 5) 
        {
            // First 5 days: $2/day
            fine = days * 2.0;
        } 
        else if (days <= 10) 
        {
            // First 5 days at $2/day + remaining days (up to next 5) at $4/day
            fine = (5 * 2.0) + ((days - 5) * 4.0);
        } 
        else 
        {
            // First 5 days at $2/day + next 5 days at $4/day + remaining days (up to next 20) at $6/day
            fine = (5 * 2.0) + (5 * 4.0) + ((days - 10) * 6.0);
        }

        // Output the calculated fine
        printf("\n====================================\n");
        printf("Total Days Late: %d\n", days);
        printf("Total Fine Due : $%.2f\n", fine);
        printf("====================================\n");
    }

    return 0;
}
