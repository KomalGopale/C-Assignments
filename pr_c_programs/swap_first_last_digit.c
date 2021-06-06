/*program to swap first and last digit of a number*/
#include <stdio.h>
int main()
{
    int number,first_digit,last_digit,temp_num;
    printf("Enter your number: ");
    scanf("%d",&number);
    last_digit = number % 10;
    first_digit = number;
    while(first_digit > 10)   //10 because we have to find digit.
    {
          first_digit = first_digit/10;
    }
    printf("before swapping first digit:%d",first_digit);
    printf("\nbefore swapping last digit:%d",last_digit);
    temp_num = first_digit;
    first_digit = last_digit;
    last_digit = temp_num;
    printf("\nafter swapping first digit:%d",first_digit);
    printf("\nafter swapping last digit:%d",last_digit);
    return 0;
}