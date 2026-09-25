#include <stdio.h>
#include <math.h>

int main() 
{
    int number, lastDigit, firstDigit, digits, swappedNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the last digit
    lastDigit = number % 10;

    // Find the total number of digits
    digits = (int)log10(number);

    // Find the first digit
    firstDigit = (int)(number / pow(10, digits));

    // Swap the first and last digits
    swappedNumber = lastDigit * pow(10, digits);
    swappedNumber += number % (int)pow(10, digits);
    swappedNumber -= lastDigit;
    swappedNumber += firstDigit;

    printf("Number after swapping the first and last digit: %d\n", swappedNumber);

    return 0;
}
