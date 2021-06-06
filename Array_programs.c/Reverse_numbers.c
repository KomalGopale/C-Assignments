/*program to input array elements and to display it in a reverse manner*/
#include <stdio.h>
int main()
{
    int i,number,size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d numbers: ",size);
    for(i=0; i<= size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    //to display Array in usual order:
     printf("Entered array in usual order is: ");
    for(i=0; i<= size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    //to display array in reverse order:
    printf("\nEntered array in reversed order is: ");
    i=size-1;
    while(i>=0)
    {
        printf("%d ",nums[i]);
        i--;
    }
    return 0;
}