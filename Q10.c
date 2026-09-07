#include <stdio.h>

int main() 
{
    long long total_seconds;
    long long hours, minutes, seconds;

    // Prompting the user for input
    printf("Enter time in seconds: ");
    if (scanf("%lld", &total_seconds) != 1) 
    {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Input validation: Time cannot be negative
    if (total_seconds < 0) 
    {
        printf("Error: Seconds cannot be negative.\n");
        return 1;
    }

    // Performing conversions
    // 1 hour = 3600 seconds
    // 1 minute = 60 seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Displaying the result in HH:MM:SS format
    // %02lld pads the output with a leading zero if it is a single digit
    printf("\n--- Time Conversion Results ---\n");
    printf("Total Input Seconds: %lld\n", total_seconds);
    printf("Converted Format:    %02lld:%02lld:%02lld\n", hours, minutes, seconds);

    return 0;
}
