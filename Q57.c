#include <stdio.h>

int main() 
{
    // Declare an array with a maximum capacity.
    int arr[100];
    int n, i, sum = 0;

    // --- Get the size of the array from the user ---
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    // Input validation
    if (n > 100 || n <= 0) 
    {
        printf("Error: Invalid number of elements.\n");
        return 1; // Exit with an error
    }

    // --- Read elements from the user ---
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // --- Calculate the sum ---
    for (i = 0; i < n; i++) 
    {
        sum += arr[i]; // Shorthand for sum = sum + arr[i]
    }

    // --- Print the result ---
    printf("\nThe sum of the entered elements is: %d\n", sum);

    return 0;
}
