/*program to copy elements of first array into second array*/
#include <stdio.h>
int main()
{
    int size,number,i;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    //to enter elemenes of original array
    printf("Enter %d numbers: ",size);
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    //to display original array:
    printf("Original array is: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    //to copy elements of original array:
    int copy_nums[size];
    i=0;
    while(i<=size-1)
    {   
        copy_nums[i] = nums[i];
        i++;
    }
    //to print copied array:
    printf("\nCopied array is: ");
    i=0;
    while(i<=size-1)
    {
        printf("%d ",copy_nums[i]);
        i++;
    }
    return 0;
}