/*program to calculate third angle of a triangle if two of its angles are known*/
#include <stdio.h>
int main()
{
    int ang1,ang2,ang3;
    printf("Input first angle of triangle: ");
    scanf("%d",&ang1);
    printf("Input second angle of triangle: ");
    scanf("%d",&ang2);
    ang3 = 180-(ang1+ang2);
    printf("Third angle of the triangle is: %d",ang3);
    return 0;
}