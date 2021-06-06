#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number upto which you want sum of even numbers: ");
    scanf("%d",&n);
    printf("All even numbers upto %d are: ",n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
        }                         
        else
        continue;
        printf(" %d",i);
    }     
    printf("\nsum of all even numbers upto %d is: ",n);
    for(i=1; i<=n; i++)
    {
        if(i % 2== 0)
        {   
        }
        else
        continue;
        sum += i;
    }
    printf("%d ",sum);
}