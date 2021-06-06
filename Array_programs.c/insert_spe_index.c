/*program to insert any number at specific index of original array and to display updated array*/
#include <stdio.h>
int main()
{
    int size,i,number,ind_num,new_num;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;     
    }
    printf("Before insertion elements of array are: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\nEnter the number to be inserted: ");
    scanf("%d",&new_num);
    size += 1;
    printf("Enter index number: ");
    scanf("%d",&ind_num);
    //to create space for new_num:
    for(i=size; i>=ind_num; i--)
    {
        nums[i] = nums[i-1];
    }
    //to insert new_num at ind_num and to show updated array:
    printf("After inserting number %d at index %d the updated array is: ",new_num,ind_num);
    nums[ind_num] = new_num;
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}