/* program to nd first and last digit of number*/
#include <stdio.h>
int main()
{
    int number,first_digit,last_digit;
    printf("Enter your number: ");
    scanf("%d",&number);
    last_digit = number % 10;
    first_digit = number;
    while(first_digit > 10)   //10 because we have to find digit.
    {
          first_digit = first_digit/10;
    }
    printf("first digit of a number %d is: %d",number,first_digit);
    printf("\nlast digit of a number %d is: %d",number,last_digit);
  return 0;
} 