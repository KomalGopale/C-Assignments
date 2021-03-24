/*program to convert age into seconds*/
#include <stdio.h>
#include <math.h>
int main()
{
    int age,age_seconds;
    printf("Enter your age in years: ");
    scanf("%d",&age);
    age_seconds = 3.156*pow(10,7)*age;
    printf("your age in seconds is: %d",age_seconds);
}