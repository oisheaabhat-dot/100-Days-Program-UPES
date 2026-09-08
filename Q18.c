#include <stdio.h> // Standard Input/Output library for functions like printf and scanf

int main() 
{
    // Declare an integer variable to store the percentage input by the user.
    int percentage;

    // Prompt the user to enter their percentage.
    printf("Enter the percentage (0-100): ");
    
    // Read the integer entered by the user and store it in the 'percentage' variable.
    scanf("%d", &percentage);

    // Check if the entered percentage is outside the valid range of 0-100.
    if (percentage < 0 || percentage > 100) 
    {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
    }
    // If the percentage is 90 or above, assign Grade A.
    else if (percentage >= 90) 
    {
        printf("Grade A\n");
    }
    // If the percentage is 80 or above (but less than 90), assign Grade B.
    else if (percentage >= 80) 
    {
        printf("Grade B\n");
    }
    // If the percentage is 70 or above (but less than 80), assign Grade C.
    else if (percentage >= 70) 
    {
        printf("Grade C\n");
    }
    // If the percentage is 60 or above (but less than 70), assign Grade D.
    else if (percentage >= 60) 
    {
        printf("Grade D\n");
    }
    // For any percentage below 60, assign Grade F.
    else 
    {
        printf("Grade F\n");
    }

    // Return 0 to indicate that the program executed successfully.
    return 0;
}
