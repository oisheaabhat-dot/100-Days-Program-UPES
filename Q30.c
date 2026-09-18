#include <stdio.h>

int main() 
{
    int num, reversedNum = 0, remainder, originalNum;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for output reference

    // Loop to reverse the digits
    while (num != 0) 
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Display the reversed number
    printf("Original Number: %d\n", originalNum);
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
