/*program to count even and odd numbers in array*/
/*Question no.2*/
#include <stdio.h>
int i;
int odd_even_counter(int *p,int size,int *a,int *b,int arr[]);
int main()
{   
    int even_no = 0,odd_no = 0,size;
    int *even_ptr;
    int *odd_ptr;
    int arr[2];
    even_ptr = &even_no;
    odd_ptr =&odd_no;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int nums[size];
    printf("Enter %d elements of array: ",size);
    for(i = 0;i < size;i++)
    {
        scanf("%d",&nums[i]);
    }
    odd_even_counter(nums,size,even_ptr,odd_ptr,arr);
    printf("even numbers in array are: %d",arr[0]);
    printf("\nodd numbers in array are: %d",arr[1]);
    return 0;
}
int odd_even_counter(int *p,int size,int *a,int *b,int arr[])
{  
   for(i = 0;i < size;i++)
   {
       if(*(p+i) % 2 == 0)
       {
           *a = *a+1;
           arr[0] = *a;
       }
       else
       {
           *b = *b+1;
           arr[1] = *b;
       }
   }
}