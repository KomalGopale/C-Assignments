#include <stdio.h>
int main()
{
    int i,n,end;
    printf("Enter number that multiplication table you want to find: ");
    scanf("%d",&n);
    printf("multiplication table of %d is : ",n);
    end = n*10;
    for(i=n; i<=end; i++)
    {
        if(i%n == 0)
        {
            printf("%d   ",i);
        }
    }
    return 0;
}