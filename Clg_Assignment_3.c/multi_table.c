/*program to print multiplication table upto certain*/
/*Question no.5*/
#include <stdio.h>
int main()
{   
    int number1,number2,count = 0,i,j;
    printf("Enter the first number from which you want multiplication table: ");
    scanf("%d",&number1);
    printf("Enter the second number upto which you want multiplication table: ");
    scanf("%d",&number2);
    for(i = 1; i <=10 ; i++)
    {
      for(j =number1; j <= number2; j++)
      { 
               printf("%d x %d = %d",j,i,i*j);
               printf("\t");
      }
      printf("\n");
    }
    return 0;
}