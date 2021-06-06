#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number upto which you want sum of n natural numbers: ");
    scanf("%d",&n);
    printf("sum of natural numbers upto %d is: ",n);
    for(i=1; i<=n; i++)
    {
       sum += i;
    }
    printf("%d",sum);
    return 0;
}