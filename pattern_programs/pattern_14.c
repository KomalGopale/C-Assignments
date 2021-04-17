/*pattern program - 15*/
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i = 0; i < 4; i++)
    {   
        k = 1;
        for(j = 0; j < 4; j++)
        {
            if(i>=j)
            {
               printf("%d ",k);
               k++;
            }
        }
        printf("\n");
    }
    return 0;
}