#include <stdio.h>
int main()
{
    int number,count=0;
    printf("enter number: ");
    scanf("%d",&number);
    printf("Total number of digits in number %d are: ",number);
    while(number > 0) // 0 because we have to divide number so it should be > 0.
    {
        number=number/10;
        count++;
    }
    printf("%d",count);
    return 0;
}