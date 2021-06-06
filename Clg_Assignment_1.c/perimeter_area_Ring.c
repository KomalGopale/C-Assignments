#include <stdio.h>
#include <math.h>
int main()
{   /*QUESTION:2*/
    /*program to calculate Perimeter and Area of a ring*/
    float Outer_rad,Inner_rad,Perimeter,Area;
    float PI = 3.14;
    printf("Enter OUTER radius of a ring: ");
    scanf("%f",&Outer_rad);
    printf("Enter INNER radius of a ring: ");
    scanf("%f",&Inner_rad);
    Perimeter = 2*PI*(Outer_rad+Inner_rad);
    printf("perimeter of ring is: %f\n",Perimeter);
    Area = PI*(pow(Outer_rad,2)-pow(Inner_rad,2));
    printf("Area of ring is: %f sq.unit",Area);
    return 0;
}
