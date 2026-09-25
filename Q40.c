#include <stdio.h>
#include <string.h>

int main() 
{
    char binary[100], onesComplement[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find the one's complement
    for (i = 0; i < strlen(binary); i++) 
    {
        if (binary[i] == '0') 
        {
            onesComplement[i] = '1';
        } 
        else if (binary[i] == '1') 
        {
            onesComplement[i] = '0';
        }
    }
    onesComplement[i] = '\0';

    printf("The 1's complement is: %s\n", onesComplement);

    return 0;
}
