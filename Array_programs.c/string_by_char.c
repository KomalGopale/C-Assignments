/*progarm to print string character by character*/
#include <stdio.h>
int main()
{
    char name[] = "PROGRAMMING\n";
    int i;
    printf("Our string is: %s",name);
    for(i=0; name[i]!='\0';i++)
    {
        printf("%c\n",name[i]);
    }
    return 0;
}