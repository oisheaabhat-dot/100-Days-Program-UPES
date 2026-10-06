#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

int main() 
{
    int arr[MAX_SIZE];
    int size, i;
    int max, min;

    // 1. Input the size of the array
    printf("Enter the number of elements (1 to %d): ", MAX_SIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_SIZE) 
    {
        printf("Invalid array size.\n");
        return 1; // Exit with error code
    }

    // 2. Input the array elements
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) 
    {
        printf("Element [%d]: ", i);
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // 3. Initialize max and min with the first element
    max = arr[0];
    min = arr[0];

    // 4. Traverse the array to find max and min
    for (i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i]; // Update max if current element is larger
        }
        if (arr[i] < min) 
        {
            min = arr[i]; // Update min if current element is smaller
        }
    }

    // 5. Output the results
    printf("\n--- Results ---\n");
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
