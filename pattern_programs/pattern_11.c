/*pattern program - 11*/
#include <stdio.h>
int main()
{   
    int i,j;
    char ch = 'A';
    for(i = 0; i < 4; i++)
    {
        for(j = 4; j > 0; j--)
        {   
            if(j>i)
            {
              printf("%c ",ch);
              ch++;
            }
        }
        printf("\n");
    }
    return 0;
}