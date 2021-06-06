/*program to print n fibonacci terms*/
          /*Question no.3*/
#include <stdio.h>
int main()
{
    int a=0,b=1,c,i,number;
    printf("Enter upto which you want to print fibonacci sequence: ");
    scanf("%d",&number);
    printf("Fibonacci terms are: ");
    for(i = 1; i<=number; i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}      