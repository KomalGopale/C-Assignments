/*program to find duplicate elements of array*/
#include <stdio.h>
int main()
{   
    int size,number,i,j,b,count = 0;
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
    printf("\nduplicate elements of array are: ");
    for(i=0; i<=size-1; i++)
    {  
       count=0;
       for(j=i+1; j<=size-1; j++)
       {
           if(nums[i] == nums[j])
           {
               count++;
               break;
           }
       }
       if(count>=1)
       {
        printf("%d",nums[i]);
       }
    }
    return 0;
}