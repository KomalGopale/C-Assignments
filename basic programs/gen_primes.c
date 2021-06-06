/*program to generate n prime numbers*/
#include <stdio.h>
int main()
{
    int i,j,number,count = 0;
    printf("Enter upto which you want to generate prime numbers: ");
    scanf("%d",&number);
    for(i=2; i<=number;i++)
    {
       for(j=1; j<=i; j++)
      {
          if(i % j == 0)
         {
           count++;
         } 
      }
     if(count == 2)
     printf("%d ",i);
     count = 0;
    }
    return 0;
  }
