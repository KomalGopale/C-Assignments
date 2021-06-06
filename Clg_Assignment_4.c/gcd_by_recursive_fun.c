/*program to calculate gcd by using recursive function*/
/*Question no.6*/
#include <stdio.h>
int gcd(int num1, int num2);
int main() 
{
    int num1, num2,result;
    printf("Enter First positive integer: ");
    scanf("%d",&num1);
    printf("Enter second positive integer: ");
    scanf("%d",&num2);
    result = gcd(num1,num2);
    printf("G.C.D of %d and %d is : %d",num1,num2,result);
    return 0;
}
int gcd(int num1, int num2) 
{
    if(num2 != 0)
    {
       return gcd(num2, num1 % num2);
    }
    else
    return num1;
}