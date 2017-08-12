#include <stdio.h>
int main()
{
    int bas, expon;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &bas);

    printf("Enter an expon: ");
    scanf("%d", &expon);

    while (expon != 0)
    {
        result *= bas;
        --expon;
    }

    printf("Answer = %lld", result);

    return 0;
}
