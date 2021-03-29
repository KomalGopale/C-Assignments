/*program to accept two integers and to check whether they are equal or not*/
#include <stdio.h>
void CheckEqualNumber(int,int);
int main()
{
    int int1, int2;
    printf("Enter first number: ");
    scanf("%d",&int1);
    printf("Enter second number: ");
    scanf("%d",&int2);
    CheckEqualNumber(int1,int2);
    return 0;
}
void CheckEqualNumber(int a,int b)
{
    if(a==b)
    {
      printf("Entered two numbers are equal");
    }
    else
      printf("Entered two numbers are not equal");
}