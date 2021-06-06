/*program to count characters of a string*/
/*Question no.5*/
#include <stdio.h>
void calc();
int main()
{
    calc();
    return 0;
}
void calc()
{
    char str[100];
    int counter,countDigits,countAlphabet,countSpecialchar,countSpaces;
    
    countDigits = countAlphabet = countSpecialchar = countSpaces = 0;
    printf("Enter a string: ");
    scanf("%s",str);
    for(counter = 0; str[counter]!='\0'; counter++)
    {
        if(str[counter] >= '0' && str[counter] <= '9')
        {
            countDigits++;
        }
        else if((str[counter]>='A' && str[counter] <= 'Z'|| str[counter] >= 'a' && str[counter] <= 'z'))
        {
            countAlphabet++;
        }
        else if(str[counter] == ' ')
        {
            countSpaces++;
        }
        else
        {
            countSpecialchar++;
        }
    }
    printf("Digits: %d\nAlphabets:%d\nspaces:%d\nSpecial characters:%d\n",countDigits,countAlphabet,countSpaces,countSpecialchar);
}