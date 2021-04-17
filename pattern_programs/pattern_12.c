/*pattern program - 11*/
#include <stdio.h>
int main()
{   
    int i,j;
    char ch = 'A';
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {   
            if(i>=j)
            {
              printf("%c ",ch);
            }
        }
        printf("\n");
        ch++;
    }
    return 0;
}