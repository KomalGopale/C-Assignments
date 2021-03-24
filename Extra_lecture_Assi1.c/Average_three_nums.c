/*program to calculate average of three numbers*/
#include <stdio.h>
int main()
{
    int n1,n2,n3;
    float Average;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    printf("Enter third number: ");
    scanf("%d",&n3);
    Average = (n1+n2+n3)/3;
    printf("Average of three numbers is: %f",Average);
    return 0;
}