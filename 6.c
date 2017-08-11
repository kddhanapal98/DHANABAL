#include <stdio.h>
int main()
{
    double d1, d2, d3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    if( d1>=d2 && d1>=d3 )
        printf("%.2f is the largest number.", d1);

    if( d2>=d1 && d2>=d3 )
        printf("%.2f is the largest number.", d2);

    if( d3>=d1 && d3>=d2 )
        printf("%.2f is the largest number.", d3);

    return 0;
}
