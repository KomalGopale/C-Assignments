/*recursive function program to calculate sum of digits of number*/
/*Question no.4*/
#include <stdio.h>
int sum_digits(int a);
int total=0;
int main()
{
    int num,sum;
    printf("Enter the number whose sum of digits you want to calculate: ");
    scanf("%d",&num);
    if(num<=9)
    {
        printf("sum of digits of %d is %d itself",num,num);
    }
    else
    {
        sum = sum_digits(num);
        printf("sum of digits of number %d is %d",num,sum);
    }
    return 0;
}
int sum_digits(int a)
{
    total += a%10;
    a = a/10;
    if(a>0)    
    {   
        sum_digits(a);
    }
    return total;
}