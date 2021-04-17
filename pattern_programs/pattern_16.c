/*pattern program - 16*/
#include <stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i = 0; i < 4; i++)
    {   
        ch = 'A';
        for(j = 0; j < 4; j++)
        {
           if(i <= j)
           {
               printf("%c ",ch);
               ch++;
           }
           else
           {
               printf("  ");
               ch++;
           }
        }
        printf("\n");
    }
    return 0;
}