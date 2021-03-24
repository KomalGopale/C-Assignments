/*program to check whether two numbers are equal or not*/
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("number1 and number2 are equal");
    }
    else
    {
        printf("number1 and number2 are not equal");
    }
    return 0;
}
