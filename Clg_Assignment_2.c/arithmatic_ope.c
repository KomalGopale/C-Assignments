/*progarm to accept two integers and an operator to perform specific operation*/
                 /*Question no.5*/
#include <stdio.h>
int main()
{
    int num1,num2;
    float ans;
    char ch;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    fflush(stdin);//to input character
    printf("Enter character: ");
    scanf("%c",&ch);
    if(ch == '+')
    {
      printf("Addition of %d and %d is: %d",num1,num2,num1+num2);
    }
    else if(ch == '-')
    {
      printf("Substraction of %d and %d is: %d",num1,num2,num1-num2);
    }
    else if(ch == '*')
    {
      printf("Multiplication of %d and %d is: %d",num1,num2,num1*num2);
    }
    else if(ch == '/')
    {
      printf("Division of %d and %d is: %d",num1,num2, num1/num2);
    }
    //else 
      //printf("Please enter character out of (+,-,*,/)....");
   return 0;
}