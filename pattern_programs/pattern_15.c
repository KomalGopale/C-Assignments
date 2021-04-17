/*pattern program -15*/
#include <stdio.h>
int main()
{
    int i,j,k=1;
    for(i = 4; i > 0; i--)
    {
        for(j = 1; j < 5; j++)
        {
            if(i <= j)
            {
               printf("%d ",k);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        k++;
    }
    return 0;
}
