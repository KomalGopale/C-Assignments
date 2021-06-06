/*program to take input from user by defining a array*/
#include <stdio.h>
int main()
{   
    int size,i,number;
    printf("How many numbers you want to Enter: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d numbers:",size);
    for(i=0; i<=size-1; i++)
    {
        scanf("%d",&number);
        nums[i]= number;
    }
    for(i =0; i<=size-1; i++)
    {
    printf("number at index %d is %d\n",i,nums[i]);
    }
    return 0;
}