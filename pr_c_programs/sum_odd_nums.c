#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number upto which you want to find sum of odd numbers: ");
    scanf("%d",&n);
    printf("odd numbers upto %d are: ",n);
    for(i=1; i<=n; i++)
    {
        if(i % 2== 0)
        {
            continue;
        }
        else
        printf("%d  ",i);
    }
    printf("\nsum of all odd numbers upto %d are: ",n);
    for(i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
        else
        sum += i;
    }
    printf("%d",sum);
    return 0;
}