/*program to delete specific index of that array*/
#include <stdio.h>
int main()
{
    int i,size,number,ind_num;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;     
    }
    printf("Before deletion elements of array are: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\nEnter the index number which you want to be deleted: ");
    scanf("%d",&ind_num);
    //to delete that space:
    for(i=ind_num; i<=size-1; i++)
    {
        nums[i] = nums[i+1];
    }
    size -= 1;
    //after deletion of that element to show updated array:
    printf("After deleting element at index %d the array is: ",ind_num);
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}