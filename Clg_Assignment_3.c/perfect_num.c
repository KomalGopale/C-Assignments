/*program to print perfect numbers below 500*/
/*Question no.6*/
#include <stdio.h>
int main()
{
    int i,number,sum,limit = 500;
    printf("perfect numbers below 500 are: ");
    for(number=1; number<=limit; number++)
    {  
      sum = 0;
      for(i=1; i<number; i++)
      {
         if(number % i == 0)
         {
            sum += i;
         }
      }
      if(sum == number)
      {
        printf("%d ",number);
      }
    }
    return 0;
}