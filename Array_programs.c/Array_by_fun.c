/*Array input by using function*/
#include <stdio.h>
int i,size;
void display(int nums[],int size);
int main()
{
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d elements: ",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&nums[i]);
    }
    display(nums,size);
    return 0;
}
void display(int nums[],int size)
{   
    printf("Entered elements are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ",nums[i]);
    }
}