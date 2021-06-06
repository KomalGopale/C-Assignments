/*program to display sum of array elements*/
#include <stdio.h>
int main()
{
    int number,size,i,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d numbers: ",size);
    for(i=0; i<= size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    //to dispaly entered array:
    printf("Entered Array is: ");
    for(i=0; i<= size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    //to calculate sum:
    for(i=0; i<=size-1; i++)
    {
        sum += nums[i];
    }
    printf("\nSum of elements of array is: %d",sum);
    return 0;
}