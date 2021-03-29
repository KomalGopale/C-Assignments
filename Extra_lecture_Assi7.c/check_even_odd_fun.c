/*program to check whether given number is even or odd by using function*/
#include <stdio.h>
void checkEvenOdd(int a);
int main()
{
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);
   checkEvenOdd(num);
   return 0;
}
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("Entered number %d is even",num);
    }
    else
        printf("Entered number %d is odd",num);
}