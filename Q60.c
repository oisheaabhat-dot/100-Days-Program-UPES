#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

int main() 
{
    int arr[MAX_SIZE];
    int size, i;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    // 1. Input and validate the size of the array
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

    // 3. Traverse the array and classify each element
    for (i = 0; i < size; i++) 
    {
        if (arr[i] > 0) 
        {
            positiveCount++; // Element is strictly greater than 0
        } 
        else if (arr[i] < 0) 
        {
            negativeCount++; // Element is strictly less than 0
        } 
        else 
        {
            zeroCount++;     // Element is exactly 0
        }
    }

    // 4. Output the classification results
    printf("\n--- Element Distribution ---\n");
    printf("Positive numbers : %d\n", positiveCount);
    printf("Negative numbers : %d\n", negativeCount);
    printf("Zeroes           : %d\n", zeroCount);

    return 0;
}
