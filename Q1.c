#include <stdio.h>

int main()
{
  int firstNumber, secondNumber, sum;
    
    // Prompting user for input
    printf("Enter two integers: ");
    
    // Reading the input values
    scanf("%d %d", &firstNumber, &secondNumber);

    // Calculating the sum
    sum = firstNumber + secondNumber;      
    
    // Displaying the result
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
    
    return 0;
}
