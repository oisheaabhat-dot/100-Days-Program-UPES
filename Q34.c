#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int num) 
{
    // 0 and 1 are not prime numbers
    if (num <= 1) 
    {
        return false;
    }
    
    // 2 is the only even prime number
    if (num == 2) 
    {
        return true;
    }
    
    // Exclude all other even numbers
    if (num % 2 == 0) 
    {
        return false;
    }
    
    // Check odd factors up to the square root of num
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2) 
    {
        if (num % i == 0) 
        {
            return false; // Found a factor, so it is not prime
        }
    }
    
    return true; // No factors found, it is prime
}

int main() 
{
    int number;
    
    printf("Enter an integer to check: ");
    if (scanf("%d", &number) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // Check and display the result
    if (isPrime(number)) 
    {
        printf("%d is a prime number.\n", number);
    } 
    else 
    {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}
