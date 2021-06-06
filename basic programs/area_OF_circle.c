#include <stdio.h>
int main()
{
  float radius,PI = 3.14,Area;
  printf("Enter radius of a circle: ");
  scanf("%f",&radius);
  Area = PI*radius*radius;
  printf("Area of circle is : %f sq.unit",Area);
  return 0;
}