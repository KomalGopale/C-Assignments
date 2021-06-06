/*linear search program*/
/*Question no.2*/
#include <stdio.h>
int size,n,i;
int lin_search(int nums[size],int n);
int main()
{   
    int result;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter elements of array: ");
    for(i = 0;i < size;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter key to be searched: ");
    scanf("%d",&n);
    result = lin_search(nums,n);
    if(result == i)
    {
      printf("key is present in array\n");
      printf("position of key is: %d",i);
    }
    else
    {
     printf("key is not present in array");
    }
    return 0;
}
int lin_search(int nums[size],int n)
{
    for(i = 0;i < size;i++)
    {
        if(nums[i] == n)
        {   
            return i;
        }
    }
    return -1;
}
