/*program to check candidate is eligible or not for caste his/her vote by age*/
#include <stdio.h>
#include <math.h>
int main()
{
    int age, eligibility_age = 18;
    printf("Enter age of a candidate: ");
    scanf("%d",&age);
    if(age < eligibility_age)
    {
      printf("Sorry! you are not eligible to your vote\n");
      printf("You will be able to caste your vote after %d years!!!",eligibility_age - age);  
    }
    else
    {
      printf("congratulations!!! you are eligible for casting your vote");
    }
    return 0;
}