/*program to display n natural numbers from 1 to n*/
#include <stdio.h>
int main()
{
    int i,n;
    printf("How many natural numbers you want dispaly: ");
    scanf("%d",&n);
    printf("Natural numbers from 1 to %d are: ",n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",i);
    }
    return 0;
}