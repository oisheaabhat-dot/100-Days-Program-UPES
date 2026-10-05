#include <stdio.h>

int main() 
{
    // Declare an integer array with a maximum capacity of 100 elements.
    int arr[100];
    int n, i;

    // --- 1. Get the total number of elements from the user ---
    printf("Enter the number of elements you want to store (1 to 100): ");
    scanf("%d", &n);

    // Input validation
    if (n > 100 || n <= 0) 
    {
        printf("Error: Number of elements must be between 1 and 100.\n");
        return 1; // Exit with an error code
    }

    // --- 2. Read elements from the user and store them in the array ---
    printf("\nEnter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // --- 3. Print the elements stored in the array ---
    printf("\n--- The elements you entered are: ---\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); // for a clean newline at the end

    return 0; // Indicates successful execution
}
