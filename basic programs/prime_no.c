/*program to check whether a entered number is prime or not*/
#include <stdio.h>
int main()
{
    int i,number,count = 0;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number==1)
    {
      printf("1 is neither prime nor composite number");
    }
    else
    {
      for(i=1; i<=number; i++)
     { 
       if(number % i == 0)
       {
        count++;
       }
     }
     if(count==2)
     {
       printf("Entered number is prime number");
     }
     else
     printf("Entered number is not a prime number");
    }
     return 0;
}