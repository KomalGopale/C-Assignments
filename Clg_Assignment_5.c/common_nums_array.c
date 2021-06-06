/*program to find common elements from two sets*/
/*Question no 6*/
#include <stdio.h>
int main()
{   int i,j,count,n=0,size1,size2,number1,number2;
    printf("Enter size of the first set: ");
    scanf("%d",&size1);
    int nums1[size1];
    printf("Enter the elements of the first set: ");
    for(i = 0; i < size1; i++)
    {
        scanf("%d",&number1);
        nums1[i] = number1;
    }
    printf("Enter size of the second set: ");
    scanf("%d",&size2);
    int nums2[size2];
    int com_nums[size1+size2];
    printf("Enter the elements of the second set: ");
    for(i = 0; i < size2; i++)
    {
        scanf("%d",&number2);
        nums2[i] = number2;
    }
    for(i=0; i<size1; i++)
    {  
       count=0;
       for(j=0; j<size2; j++)
       {
           if(nums1[i] == nums2[j])
           {
               count++;
               break;
           }
       }
       if(count == 1)
       {
           com_nums[n] = nums1[i];
           n++;//flag
       }    
    }
    if(n == 0) 
    {
        printf("\nthere is nothing common in both sets");
    }
    else
    {
        printf("common elements of both sets are : ");
        for(i = 0; i < n; i++)
        {
            printf("%d ",com_nums[i]);
        }
    }
    return 0;
}