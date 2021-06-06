/*program to merge input of two arrays and display them as single input*/
#include <stdio.h>
int main()
{
    int size1,size2,number,i,j;
    printf("Enter size of first array: ");
    scanf("%d",&size1);
    printf("Enter size of second array: ");
    scanf("%d",&size2);
    int nums1[size1];
    int nums2[size2];
    printf("Enter elements of first array: ");
    for(i=0; i<=size1-1; i++)
    {
        scanf("%d",&number);
        nums1[i] = number;
    }
    printf("Enter elements of second array: ");
    for(i=0; i<=size2-1; i++)
    {
        scanf("%d",&number);
        nums2[i] = number;
    }
    printf("Merged output of both array is: ");
    for(i=0; i<=size1-1; i++)
    {
        printf("%d ",nums1[i]);
    }
    for(j=0; j<=size2-1; j++)
    {
       printf("%d ",nums2[j]);
    }
    return 0;
}   