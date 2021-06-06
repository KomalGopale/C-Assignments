#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter number upto which you want to print numbers in reverse order: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}