/*Menu driven program for area of square,rectangle and triangle*/
                 /*Question no.7*/
#include <stdio.h>
#include <math.h>
int main()
{
    float length,bredth,base,height;
    float Area;
    int choice;
    printf("This is a menu driven program for AREA !!!");
    printf("\ninput 1 for area of SQUARE");
    printf("\ninput 2 for area of RECTANGLE");
    printf("\ninput 3 for area of TRIANGLE");
    printf("\ninput your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("Input length of side of the SQUARE: ");
          scanf("%f",&length);
          Area = pow(length,2);
          break;
        case 2:
          printf("Input length of RECTANGLE: ");
          scanf("%f",&length);
          printf("Input bredth of RECTANGLE: ");
          scanf("%f",&bredth);
          Area = length*bredth;
          break;
        case 3:
          printf("Input base of the TRIANGLE: ");
          scanf("%f",&base);
          printf("Input height of the TRIANGLE: ");
          scanf("%f",&height);
          Area = 0.5*base*height;
          break;
        default:
          printf("Input correct choice\n");   
    }
    if(choice == 1|| choice == 2|| choice == 3)
    {
        printf("Area is : %f sq.unit",Area);
    }
    return 0;    
}