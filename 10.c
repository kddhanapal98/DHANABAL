#include<stdio.h>
int main()
{
  int Number, j, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);
  
  for(j = 1; j <= Number; j++)
  {
     Sum = Sum + j;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}

