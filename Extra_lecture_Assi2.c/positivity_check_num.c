/*program to check wether entered number is positive or not*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number>0)
    {
      printf("Entered number %d is positive",number);
    }
    else if(number == 0)
    {
      printf("Entered number %d is neither positive nor negative",number);
    }
    else 
    printf("Entered number %d is negative",number);
    return 0;
}
