/*program to read any day number in integer and to display day name in word*/
#include <stdio.h>
int main()
{
    int day_num;
    printf("Enter any day number: ");
    scanf("%d",&day_num);
    switch(day_num)
    {
       case 1:
       printf("Your day name is :'MONDAY'");
       break;
       case 2:
       printf("Your day name is :'TUESDAY'");
       break;
       case 3:
       printf("Your day name is :'WEDNESDAY'");
       break;
       case 4:
       printf("Your day name is :'THURSDAY'");
       break;
       case 5:
       printf("Your day name is :'FRIDAY'");
       break;
       case 6:
       printf("Your day name is :'SATURDAY'");
       break;
       case 7:
       printf("Your day name is :'SUNDAY'");
       printf("\nit's weekend ENJOY!!!");
       break;
       default:
       printf("Invalid input!!!");
       printf("\nPlease enter day number between and equal to 1 and 7");  
    }
}