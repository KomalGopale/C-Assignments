#include <stdio.h>
int main()
{
    int i;
    printf("odd numbers between 1 and 100 are: ");
    for(i=1; i<=100; i++)
    {
        if(i % 2==0)
        {
            continue;
        }
        else
        printf("%d\t",i);
    }
    return 0;
}
