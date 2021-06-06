/*program to check whether a number is palindrome or not*/
            /*Question no.4*/
#include <stdio.h>
int main()
{
    int rev_num = 0,dupli_num,remainder,number;
    printf("Enter the number you want to check for palindrome: ");
    scanf("%d",&number);
    dupli_num = number;
    while(number!=0)
    {
        remainder = number % 10;
        rev_num = rev_num*10+remainder;
        number = number/10;
    }
    if(dupli_num==rev_num)
    {
        printf("Entered number is palindrome number");
    }
    else
    {
        printf("Entered number is not palindrome number");
    }
   return 0;  
}