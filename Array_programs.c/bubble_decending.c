/*program to arrange array elements in a descending number*/
#include <stdio.h>
int main()
{
    int size,number,i,j,k,temp,count;
    printf("Enter the size of a array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i = 0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    printf("Elements of array are: ");
    for(i = 0; i<= size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    for(i = 0; i<=size-1; i++)
    {
        for(j = i+1; j<=size-1; j++)
        {   
            if(nums[i]<nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    printf("\nArray elements in descending order are:");
    for(i = 0; i<=size-1; i++)
    {
       printf("%d ",nums[i]);
    }
    return 0;
}