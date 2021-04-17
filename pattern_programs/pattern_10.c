/*pattern program - 10*/
#include <stdio.h>
int main()
{
    int i,j;
    char ch = 'A';
    for(i = 0; i < 5; i++)
    {  
        for(j = 0; j < 5; j++)
        {
            if(i < j)
            {
                printf("%c ",ch);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        ch++;
    }
}
