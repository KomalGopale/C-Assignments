/*program to find number of elements entered in array*/
#include <stdio.h>
int main()
{
    int nums[100];
    int i,number,count=0;
    printf("Enter less than 100 numbers: ");
    printf("\nWe will return how many numbers you have entered!!!");
    printf("\nTO stop enter number 0\n");
    for(i=0; i<=count; i++)
    {
        printf("Enter number: ");
        scanf("%d",&number);
        count += 1;
        if(number == 0)
        {
          break;
        }
    }
    printf("You have entered %d elements",count-1);
    return 0;
}