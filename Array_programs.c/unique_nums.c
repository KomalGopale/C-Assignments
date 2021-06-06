/*progarm to print unique elements of array*/
#include <stdio.h>
int main()
{   
    int size,number,i,j,b;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    int dupli_nums[size];
    printf("Enter elements of array: ");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    printf("Array elements are: ");
    for(i=0; i<=size-1; i++)
    {
        printf("%d ",nums[i]);
    }
    printf("\nunique elements of array are: ");

    for(i=0; i<=size-1; i++)
    {  
        for (j=0; j < size; j++) 
        {
            if (i == j) 
            continue;
            if (nums[i] == nums[j]) 
            {
                break;
            }
        }
        if (j == size) 
        {
            printf("%d ", nums[i]);
        }
    }
    return 0;
}