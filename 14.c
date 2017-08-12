#include <stdio.h>
int main()
{
    int m, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&m);

    for(i=2; i<=m/2; ++i)
    {
        // condition for nonprime number
        if(m%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",m);
    else
        printf("%d is not a prime number.",m);
    
    return 0;
}
