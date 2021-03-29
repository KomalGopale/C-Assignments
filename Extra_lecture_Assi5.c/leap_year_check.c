/*program to check whether a given year is leap year or not*/
#include <stdio.h>
int main()
{
   int year;
   printf("Enter year that you want to check: ");
   scanf("%d",&year);
   if( year % 4 == 0)
   { 
      if( year % 100 == 0)
      {
         if( year % 400 == 0)
         {
          printf("Entered year %d is a leap year",year);
         }
         else
         printf("Entered year %d is not a leap year",year);
      }
      else
      printf("Entered year %d is a leap year",year);
   }
   else
   printf("Entered year %d is not a leap year",year);
   return 0;  
}