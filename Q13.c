#include <stdio.h>

int main() 
{
    int year;

    // Prompt the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year conditions
    // A year is a leap year if it's divisible by 400
    // or if it's divisible by 4 but not by 100.
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) 
    {
        printf("%d is a leap year.\n", year);
    } 
    else 
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
