/*pattern program -4*/
#include <stdio.h>
int main()
{
    char ch;
    int i,j;
    for(i = 0; i < 4; i++)
    {   
        ch = 'A';
        for(j = 0; j < 4; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}