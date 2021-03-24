/*program to calculate area of a triangle using three sides*/
/*by using herons formula*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c; 
    float s,Area;
    printf("Enter first side of triangle: ");
    scanf("%f",&a);
    printf("Enter second side of triangle: ");
    scanf("%f",&b);
    printf("Enter third side of triangle: ");
    scanf("%f",&c);
    s = (a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is: %f sq.unit",Area);
    return 0;
}