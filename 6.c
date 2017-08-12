#include <stdio.h>
int main()
{
    double s1, s2, s3;

    printf("Enter three different numbers: ");
    scanf("%ld %ld %ld", &s1, &s2, &s3);

    if( s1>=s2 && s1>=s3 )
        printf("%.2d is the largest number.", s1);

    if( s2>=s1 && s2>=s3 )
        printf("%.2d is the largest number.", s2);

    if( s3>=s1 && s3>=s2 )
        printf("%.2d is the largest number.", s3);

    return 0;
}
