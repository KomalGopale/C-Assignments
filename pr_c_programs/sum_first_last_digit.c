/* program to do sum of first and last digit of any number*/
#include <stdio.h>
int main()
{
  int number,first_digit,last_digit,sum;
    printf("Enter your number: ");
    scanf("%d",&number);
    last_digit = number % 10;
    first_digit = number;
    while(first_digit > 10)   //10 because we have to find digit.
    {
          first_digit = first_digit/10;
    }
    sum = first_digit+last_digit;
    printf("sum of first and last digit of a number %d is : %d",number,sum);
    return 0;
}