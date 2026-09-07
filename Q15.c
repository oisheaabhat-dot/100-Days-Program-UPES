#include <stdio.h>

int main() 
{
    char ch;

    // Prompt user for input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Conditional checks using ASCII boundaries
    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') 
    {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        printf("'%c' is a digit.\n", ch);
    } 
    else 
    {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
