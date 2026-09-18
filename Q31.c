#include <stdio.h>

int main() 
{
    int number;
    int started = 0; // Flag to prevent printing leading zeros

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Handle the special case where the number is 0
    if (number == 0) 
    {
        printf("Binary representation: 0\n");
        return 0;
    }

    printf("Binary representation: ");

    // For a standard 32-bit integer, we check each bit from MSB to LSB
    for (int i = 31; i >= 0; i--) 
    {
        // Shift the bit to the LSB position and mask it with 1
        int bit = (number >> i) & 1;

        if (bit == 1) 
        {
            started = 1; // We found the first non-zero bit
        }

        if (started) 
        {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}
