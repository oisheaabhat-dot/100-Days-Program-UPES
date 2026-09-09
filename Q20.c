#include <stdio.h>

int main() 
{
    int dayNumber;

    // Prompt the user for input
    printf("Enter a day number (1-7): ");
    if (scanf("%d", &dayNumber) != 1) 
    {
        printf("Error: Please enter a valid integer.\n");
        return 1;
    }

    // Determine and display the day using switch-case
    switch (dayNumber) 
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Error: Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}

