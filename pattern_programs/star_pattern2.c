/*star pattern- 2*/
#include <stdio.h>
int main()
{
    int i,j;
    for(i = 0; i < 4; i++)
    {
        for(j = 1; j < 5; j++)
        {
            if(i<j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}