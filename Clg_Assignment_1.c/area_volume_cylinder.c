#include <stdio.h>
#include <math.h>
int main()
{   /*QUESTION:1*/
    /*program to calculate surface area and volume of cylinder*/
  float radius,height,Surface_Area,Volume,PI = 3.14;
  printf("Enter radius of cylinder: ");
  scanf("%f",&radius);
  printf("Enter height of cylinder: ");
  scanf("%f",&height);
  Surface_Area = (2*PI*pow(radius,2))+(2*PI*radius*height);
  printf("surface area of a cylinder is: %f sq.unit\n",Surface_Area);
  Volume = PI*pow(radius,2)*height;
  printf("volume of cylinder is: %f cubic unit",Volume);
  return 0;
}