/*pattern program - 7*/
#include <stdio.h>
int i,j,k= 1;
int main()
{   
    int i,j,k= 1;
    for(i = 0; i < 4; i++)
    {   
        for(j = 0; j < 4; j++)
        {   
            while(k<17)
            {
                printf("%d   ",k);
                k++;   
                if(k % 4 == 1)
                {
                    printf("\n");
                }
            }
        }
    }
return 0;
}

    