/*program to aacept a grade and display the equivalent description*/
//Grade Description
//E    Excellent
//V    Very Good
//G    Good
//A    Average
//F    Fail
#include <stdio.h>
int main()
{
    char grade;
    printf("Input the grade: ");
    scanf("%c",&grade);
    switch(grade)
    {
    case 'E':
         printf("Excellent");
         break;
    case 'V':
         printf("Very Good");
         break;
    case 'G':
         printf("Good");
         break;
    case 'A':
         printf("Average");
         break; 
    case 'F':
         printf("Fail");
         break;
    default :
         printf("Invalid Grade Found");
    }
    return 0;
}