/*program to check whether Entered character is digit or character in upper or lowercase*/
                    /* Question No.2 */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if(ch >= 48 && ch <= 58)
    {
        printf("Entered character %c is digit",ch);
    }
    else if(ch >= 65 && ch <= 90)
    {
        printf("Entered character %c is uppercase letter",ch);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("Entered character %c is lowercase letter",ch);
    }
    //else
    //printf("Entered character %c is a special character",ch);
    return 0;
}