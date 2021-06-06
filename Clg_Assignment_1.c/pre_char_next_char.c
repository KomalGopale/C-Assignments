#include <stdio.h>
#include <math.h>
int main()
{   /*QUESTION:3*/
    /*program to display previous and next character of entered character*/
    char character;
    printf("Enter any character: ");
    scanf("%c",&character);
    printf("your entered character is: %c\n",character);
    printf("previous character is: %c\n",character-1);
    printf("next character is: %c\n",character,character+1);
    printf("sequentially all characters are: %c %c %c",character-1,character,character+1);
    return 0;
}