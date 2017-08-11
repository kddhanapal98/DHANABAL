#include <stdio.h>
 
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%cd", &c);
     
 
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }
 
    return 0;
} 
