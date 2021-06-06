/*program of checking number is even or not*/
#include <stdio.h>
int i,k,j,size;
int iseven(int *p,int size);
int main()
{  
   printf("Enter the size of array: ");
   scanf("%d",&size);
   int nums[size];
   int even[size];
   int odd[size];
   printf("Enter the array elements: ");
   for(i = 0; i < size; i++)
   {
       scanf("%d",&nums[i]);
   }
   int *p = &nums;
   for(j = 0; j < size; j++)
   {   
       if(iseven(nums,size))
       {
           even[j] = nums[j];
       }
       else
       {
           odd[j] = nums[j];
       }
   }
   printf("even numbers are: ");
   for(i = 0;i < size;i++)
   {
     printf("%d ",even[i]);
   }
   printf("odd numbers are:");
   for(i = 0;i < size;i++)
   {
     printf("%d ",odd[i]); 
   }
   return 0;
}
int iseven(int *P,int size)
{  
   for(i = 0; i < size; i++)
   {
       if(*(p+i)%2 == 0)
       return 1;
       else
       return 0;
       p++;
   }
}