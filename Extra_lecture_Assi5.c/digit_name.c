/* program to read any digit and display into the word */ 
#include <stdio.h>
int main()
{
    int digit;
    printf("Enter any digit: ");
    scanf("%d",&digit);
    switch(digit)
    {
       case 0:
       printf("Your digit is :'ZERO'");
       break;
       case 1:
       printf("Your digit is :'ONE'");
       break;
       case 2:
       printf("Your digit is :'TWO'");
       break;
       case 3:
       printf("Your digit is :'THREE'");
       break;
       case 4:
       printf("Your digit is :'FOUR'");
       break;
       case 5:
       printf("Your digit is :'FIVE'");
       break;
       case 6:
       printf("Your digit is :'SIX'");
       break;
       case 7:
       printf("Your digit is :'SEVEN'");
       break;
       case 8:
       printf("Your digit is :'EIGHT'");
       break;
       case 9:
       printf("Your digit is :'NINE'");
       break;
       default:
       printf("Invalid input!!!");
       printf("\nPlease enter DIGIT between and equal to 0 and 9");  
    }
}