/* Menu driven program to calculate area*/
#include <stdio.h>
int main()
{
    int choice;
    float r,l,w,b,h;
    float area;
    printf("input 1 for area of circle");
    printf("\ninput 2 for area of rectangle");
    printf("\ninput 3 for area of triangle");
    printf("\ninput your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("Input radius of the circle: ");
          scanf("%f",&r);
          area = 3.14*r*r;
          break;
        case 2:
          printf("Input length of rectangle: ");
          scanf("%f",&l);
          printf("Input width of rectangle: ");
          scanf("%f",&w);
          area = l*w;
          break;
        case 3:
          printf("Input base of the triangle: ");
          scanf("%f",&b);
          printf("Input height of the triangle: ");
          scanf("%f",&h);
          area = 0.5*b*h;
          break;
        default:
          printf("Input correct choice\n");   
    }
    if(choice == 1|| choice == 2|| choice == 3)
    {
        printf("area is : %f",area);
    }
}

