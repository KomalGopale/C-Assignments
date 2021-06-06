/*program to insert any number at last of original array and to display updated array*/
#include <stdio.h>
int main()
{
    int size,i,number,last_num;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;     
    }
    printf("elements of array are: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\nEnter the value to be inserted at last: ");
    scanf("%d",&last_num);
    size += 1;
    nums[size-1] = last_num;
    printf("Updated array after inserting number %d is: ",number);
    for(i=0; i<=size-1; i++)
    {
         printf("%d ",nums[i]);
    }
    return 0;
}
