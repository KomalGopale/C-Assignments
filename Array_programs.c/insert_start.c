/*program to insert any number at beginning of original array and to display updated array*/
#include <stdio.h>
int main()
{
    int size,i,number,first_num;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;     
    }
    printf("elements of original array are: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\nEnter the value to be inserted at beggining of a array: ");
    scanf("%d",&first_num);
    size += 1;
    for(i=size; i>=1; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[0] = first_num;
    printf("updated array is: ");
    for(i=0; i<=size-1; i++)
    {   
        printf("%d ",nums[i]);
    }
    return 0;
}