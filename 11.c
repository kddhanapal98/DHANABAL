#include <stdio.h>
int main()
{
    long long p;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &p);

    while(p != 0)
    {
        // p = n/10
        p /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
