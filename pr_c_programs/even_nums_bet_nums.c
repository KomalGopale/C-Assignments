#include <stdio.h>
int main()
{
    int i;
    printf("even numbers between 1 and 100 are : ");
    for(i=1; i<=100; i++)
    {
        if(i%2==0)
        {
            printf("\t%d",i);
        }                         
    }     
    return 0;
}