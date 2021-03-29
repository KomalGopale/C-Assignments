/*program to check whether a given number is positive or negative*/
#include <stdio.h>
void checkNum(int a);
int main()
{
    int num;
    printf("Enter the number that you want to check for: ");
    scanf("%d",&num);
    checkNum(num);
    return 0;
}
void checkNum(int num)
{
    if(num == 0)
    {
       printf("%d is neither positive nor negative number",num);
    }
    else if(num > 0)
    {
       printf("%d is a positive number",num);
    }
    else
       printf("%d is a negative number",num);
}