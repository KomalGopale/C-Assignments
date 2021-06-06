/*program to check whether given string is palindrome or not*/
/*Question no.5*/
#include <stdio.h>
#include <string.h>
int palindrome_checker(char string[],int l);
int main()
{   
    int l,k;
    char string[20];
    printf("Enter the string: ");
    gets(string);

    l = strlen(string);
    k = palindrome_checker(string,l);

    if(k==1)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    return 0;
}
int palindrome_checker(char string[],int l)
{  
    int i,count = 0;
    for(i=0;i<l/2;i++)  
    {
    	if(string[i]==string[l-i-1])
        {
    	    count++;
        }
 	}
 	if(count==i)
 	{
         return 1;
    }
    else
    {
        return 0;
    }
}
