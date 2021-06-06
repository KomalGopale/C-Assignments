#include <stdio.h>
int main()
{
    int num1,num2,total;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    total = num1+num2;
    printf("Addition of %d and %d is: %d",num1,num2,total);
    return 0;
}