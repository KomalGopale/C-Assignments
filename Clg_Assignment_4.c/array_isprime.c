/*program of checking number is even or not*/
/*Question no.2*/
#include <stdio.h>
int i,k,j,size;
int iseven(int num);
int main()
{  
   int count1,count2;
   printf("Enter the size of array: ");
   scanf("%d",&size);
   int nums[size];
   printf("Enter the array elements: ");
   for(i = 0; i < size; i++)
   {
       scanf("%d",&nums[i]);
   }
   for(i = 0; i < size; i++)
   {   
       if(iseven(nums[i]))
       {   
           printf("\neven number: %d",nums[i]);
       }
       else
       {  
           printf("\nodd number: %d",nums[i]);
       }
   }
   return 0;
}
int iseven(int num)
{  
       if(num%2 == 0)
       return 1;
       else
       return 0;
}