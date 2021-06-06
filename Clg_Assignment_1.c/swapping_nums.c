#include <stdio.h>
#include <math.h>
int main()
{   /*QUESTION:5*/
    /*program to interchange two numbers*/
    int num1,num2,temp_num;
    //int swap(int a,int b);
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    printf("before interchanging: num1 = %d\n",num1);
    printf("before interchanging: num2 = %d",num2);
    temp_num = num1;
    num1 = num2;
    num2 = temp_num;
    printf("\nAfter interchanging: num1 = %d\n",num1);
    printf("After interchanging: num2 = %d",num2);
    return 0;
}
