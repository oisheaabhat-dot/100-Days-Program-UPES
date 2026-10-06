#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

int main() 
{
    int arr[MAX_SIZE];
    int size, i;
    int evenCount = 0;
    int oddCount = 0;

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

    // 3. Traverse the array and count even/odd elements
    for (i = 0; i < size; i++) 
    {
        // A number is even if it is divisible by 2
        if (arr[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }
    }

    // 4. Output the results
    printf("\n--- Results ---\n");
    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements  = %d\n", oddCount);

    return 0;
}
