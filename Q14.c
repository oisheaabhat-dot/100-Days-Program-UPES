#include <stdio.h>
#include <ctype.h>

int main() 
{
    char ch;

    // Prompt the user to enter an alphabet character
    printf("Enter any alphabet character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        
        // Convert character to lowercase to simplify the condition check
        char lowerCh = tolower(ch);

        // Check if the character is a vowel
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("'%c' is a vowel.\n", ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
        
    } 
    else 
    {
        printf("'%c' is not a valid alphabet letter.\n", ch);
    }

    return 0;
}
