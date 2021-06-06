/*merge two sorted array into third array which is also sorted*/
/*Question no.7*/
#include <stdio.h>
int i,j,temp,size1,size2,size3;
void merging(int nums1[size1],int nums2[size2],int nums3[size3],int size1,int size2,int size3);
int main()
{   
    //for first array
    printf("Enter size of first array: ");
    scanf("%d",&size1);
    int nums1[size1];
    printf("Enter %d elements of first array: ",size1);
    for(i = 0;i < size1;i++)
    {
        scanf("%d",&nums1[i]);
    }
    printf("Entered elements of first array are: ");
    for(i = 0;i< size1;i++)
    {
        printf("%d ",nums1[i]);
    }
    for(i = 0;i < size1;i++)
    {
        for(j = i+1;j < size1;j++)
        {
            if(nums1[i] > nums1[j])
            {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    printf("\nSorted first array is: ");
    for(i = 0; i < size1;i++)
    {
        printf("%d ",nums1[i]);
    }
    //for second array:
    printf("\nEnter size of second array: ");
    scanf("%d",&size2);
    int nums2[size2];
    printf("\nEnter %d elements of second array: ",size2);
    for(i = 0;i < size2;i++)
    {
        scanf("%d",&nums2[i]);
    }
    printf("\nEntered elements of second array are: ");
    for(i = 0;i< size2;i++)
    {
        printf("%d ",nums2[i]);
    }
    for(i = 0;i < size2;i++)
    {
        for(j = i+1;j < size2;j++)
        {
            if(nums2[i] > nums2[j])
            {
                temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
            }
        }
    }
    printf("\nSorted second array is: ");
    for(i = 0; i < size2;i++)
    {
        printf("%d ",nums2[i]);
    }
    size3 = size1+size2;
    int nums3[size3];
    merging(nums1,nums2,nums3,size1,size2,size3);
    return 0;
}
//for merging and sorting of above two array:
void merging(int nums1[size1],int nums2[size2],int nums3[size3],int size1,int size2,int size3)
{   
    //for copy 1st array in third array
    for(i = 0;i < size1;i++)
    {
        nums3[i] = nums1[i];
    }
    //for copy 2nd array in third array
    for(i = size1,j = 0;  i < size3  ;i++, j++)
    {
        nums3[i] = nums2[j];
    }
    for(i = 0;i < size3;i++)
    {
        for(j = i+1;j < size3;j++)
        {
            if(nums3[i] > nums3[j])
            {
                temp = nums3[i];
                nums3[i] = nums3[j];
                nums3[j] = temp;
            }
        }
    }
    printf("\nmerged and sorted third array is: ");
    for(i = 0;i < size3; i++)
    {
        printf("%d ",nums3[i]);
    }
}
