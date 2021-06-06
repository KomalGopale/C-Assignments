/*program to find length of string without using function in C*/
#include <stdio.h>
int main()
{   
    int i,count = 0;
    char name[20];
    printf("Enter the string less than 20 characters: ");
    scanf("%s",name);
    i=0;
    while(name[i]!='\0')
    {   
        i++;
        count++;
    }
    printf("Length of string %s is: %d",name,count);

}