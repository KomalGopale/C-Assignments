/* program to read any month number and display into the word format */ 
#include <stdio.h>
int main()
{
    int month_num;
    printf("Enter any month number: ");
    scanf("%d",&month_num);
    switch(month_num)
    {
       case 1:
       printf("Your month name is :'JANUARY'");
       break;
       case 2:
       printf("Your month name is :'FEBRUARY'");
       break;
       case 3:
       printf("Your month name is :'MARCH'");
       break;
       case 4:
       printf("Your month name is :'APRIL'");
       break;
       case 5:
       printf("Your month name is :'MAY'");
       break;
       case 6:
       printf("Your month name is :'JUNE'");
       break;
       case 7:
       printf("Your month name is :'JULY'");
       break;
       case 8:
       printf("Your month name is :'AUGUST'");
       break;
       case 9:
       printf("Your month name is :'SEPETEMBER'");
       break;
       case 10:
       printf("Your month name is :'OCTOBER'");
       break;
       case 11:
       printf("Your month name is :'NOVEMBER'");
       break;
       case 12:
       printf("Your month name is :'DECEMBER'");
       break;
       default:
       printf("Invalid input!!!");
       printf("\nPlease enter number between and equal to 1 and 12");  
    }
}