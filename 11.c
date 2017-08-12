#include <stdio.h>
int main()
{
    long long s;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &s);

    while(s != 0)
    {
        // s = n/10
        s /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
