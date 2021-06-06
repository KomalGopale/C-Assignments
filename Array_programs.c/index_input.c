/*program to print any character by its index number from taking user input*/
#include <stdio.h>
int main()
{
    char name[] = "LIFE";
    int i;
    printf("Our string is: %s",name);
    printf("\nEnter the respective index number of the character you want: ");
    scanf("%d",&i);
    printf("Your desired character is: %c",name[i]);
    return 0;
}