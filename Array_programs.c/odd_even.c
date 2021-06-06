/*progarm to seperate odd and even numbers*/
#include <stdio.h>
int main()
{
    int size,i,number,count = 0;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    int odd_nums[size];
    int even_nums[size];
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
    printf("\nEven numbers are: ");
    for(i=0; i<=size-1; i++)
    {
      if(nums[i]%2 == 0)
      {
        printf("%d ",nums[i]);
      }
    }
    printf("\nOdd numbers are: ");
    for(i=0; i<=size-1; i++)
    {
      if(nums[i]%2 != 0)
      {
        printf("%d ",nums[i]);
      }
    }
    return 0;
}

