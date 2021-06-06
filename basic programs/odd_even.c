/*C program to identify whether a entered number is odd or even*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter number that you want to check: \n");
    scanf("%d",&number);
    if(number%2==0)
    {
      printf("%d is a even number",number);
    }
    else
    {
      printf("%d is an odd number",number);
    }
return 0;
}