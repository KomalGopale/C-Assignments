#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter number upto which you want to print natural numbers: ");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}