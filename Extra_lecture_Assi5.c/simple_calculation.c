/* menu driven program for simple calculation*/
#include <stdio.h>
int main()
{
    int num1,num2,opt;
    printf("Enter the first integer: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("Input your option like following...");
    printf("\n1: Addition\n2: Substraction\n3: Multiplication\n4: division\n5: Exit");
    printf("\nEnter your option number here: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
         printf("Addition of %d and %d is %d",num1,num2,num1+num2);
         break;
        case 2:
          printf("Substraction of %d and %d is %d",num1,num2,num1-num2);
         break;
        case 3:
          printf("Multiplication of %d and %d is %d",num1,num2,num1*num2);
         break;   
        case 4:
          printf("Division of %d and %d is %d",num1,num2,num1/num2);
         break;
        default:
         printf("Please Input correct option");
        return 0;
    }

}