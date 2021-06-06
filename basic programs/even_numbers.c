#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    n=10;
    for(i=0;i<=n;i++)
    {
        if(i%2 == 0)
        {
            printf("%d ",i);
        }
        else
        continue;  
    }
   return 0;
}