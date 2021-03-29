/*program to convert kilometers per hour to miles per hour*/
#include <stdio.h>
int main()
{
   float mile_speed,km_speed;
   printf("Enter your speed in km/hr: ");
   scanf("%f",&km_speed);
   mile_speed = 0.621*km_speed;
   printf("Your Speed is : %f miles/hr",mile_speed);
   return 0;
}