/*program to swap two numbers without using temporary variable*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("before swapping a = %d",a);
    printf("\nbefore swapping b = %d",b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("\nAfter swapping a = %d",a);
    printf("\nAfter swapping b = %d",b);
    return 0;
}
