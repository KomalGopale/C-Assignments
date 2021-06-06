/*program to find maximum and minimum number of the array*/
#include <stdio.h>
int min(int a,int b);
int max(int a,int b);
int main()
{
    int size,i,min_number,max_number,count,number;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    if (size < 1) {
        printf("Please enter size greater than 1.");
        return 0;
    }
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
    min_number = nums[0];
    for(i=0; i <=size-1; i++)
    {
        min_number = min(nums[i], min_number);
    }
    printf("\nMinimum number is : %d",min_number);
    max_number = nums[0];
    for(i=0; i <=size-1; i++)
    {
        max_number = max(nums[i], max_number);
    }
    printf("\nMaximum number is : %d",max_number);
    return 0;
}
int min(int a,int b)
{
    if(a < b) 
    {
       return a;
    } 
    else 
    {
       return b;
    }
}
int max(int a,int b)
{   
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}