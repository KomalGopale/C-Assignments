/*program to accept a grade and display the equivalent description*/
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
    if(grade == 'E')
    {
      printf("Excellent");
    }
    else if(grade == 'V')
    {
      printf("Very good");
    }
    else if(grade == 'G')
    { 
      printf("Good");
    }
    else if(grade == 'A')
    {
      printf("Average");
    }
    else if(grade == 'F')
    {
      printf("Fails\n");
    }
    else
      printf("Invalid grade found"); 
 return 0;
}