/*program to find area and circumference of circle*/
#include <stdio.h>
int main()
{
    float radius,Area,circumference;
    float const PI = 3.14;
    printf("Enter radius of a circle: ");
    scanf("%f",&radius);
    circumference = 2*PI*radius;
    Area = PI*radius*radius;
    printf("circumference of a circle is: %f",circumference);
    printf("\nArea of a circle is: %f sq.unit",Area);
    return 0;
}
