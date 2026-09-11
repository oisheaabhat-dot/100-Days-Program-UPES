#include <stdio.h>

int main() 
{
    int monthNumber;

    // Prompt user for input
    printf("Enter month number (1-12): ");
    if (scanf("%d", &monthNumber) != 1) 
    {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    // Determine the month name and number of days using switch-case
    switch (monthNumber) 
    {
        case 1:
            printf("Month: January\nDays: 31 days\n");
            break;
        case 2:
            // Year 2026 is a common year (28 days)
            printf("Month: February\nDays: 28 days (29 days in a leap year)\n");
            break;
        case 3:
            printf("Month: March\nDays: 31 days\n");
            break;
        case 4:
            printf("Month: April\nDays: 30 days\n");
            break;
        case 5:
            printf("Month: May\nDays: 31 days\n");
            break;
        case 6:
            printf("Month: June\nDays: 30 days\n");
            break;
        case 7:
            printf("Month: July\nDays: 31 days\n");
            break;
        case 8:
            printf("Month: August\nDays: 31 days\n");
            break;
        case 9:
            printf("Month: September\nDays: 30 days\n");
            break;
        case 10:
            printf("Month: October\nDays: 31 days\n");
            break;
        case 11:
            printf("Month: November\nDays: 30 days\n");
            break;
        case 12:
            printf("Month: December\nDays: 31 days\n");
            break;
        default:
            printf("Error: Invalid month number! Please enter a value between 1 and 12.\n");
            break;
    }

    return 0;
}
