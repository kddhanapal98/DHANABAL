#include <stdio.h>
int main()
{
    char d;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%d",&d);

    // evaluates to 1 (true) if d is a lowercase vowel
    isLowercaseVowel = (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');

    // evaluates to 1 (true) if d is an uppercase vowel
    isUppercaseVowel = (d == 'A' || d == 'E' || d == 'I' || d == 'O' || d == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%d is a vowel.", d);
    else
        printf("%c is a consonant.", d);
    return 0;
}
