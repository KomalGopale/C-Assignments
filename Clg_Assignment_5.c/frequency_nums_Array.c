/*program to find frequency of each array element*/
/*Question no.3*/
#include <stdio.h>
int main()
{
    int size,number,i,b,count;
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
    printf("\nPlz enter number to find occurence: ");
    scanf("%d",&number);
    count = 0;
    for(i=0; i<size; i++)
    {
        if(nums[i] == number)
        {
            count++;
        }
    }
    printf("%d occured %d times ",number,count);
    return 0;
}
