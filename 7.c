int main()
{
    int yea;

    printf("Enter a yea: ");
    scanf("%d",&yea);

    if(yea%4 == 0)
    {
        if( yea%100 == 0)
        {
            // yea is divisible by 400, hence the year is a leap year
            if ( yea%400 == 0)
                printf("%d is a leap year.", yea);
            else
                printf("%d is not a leap year.", yea);
        }
        else
            printf("%d is a leap year.", yea );
    }
    else
        printf("%d is not a leap year.", yea);
    
    return 0;
}
