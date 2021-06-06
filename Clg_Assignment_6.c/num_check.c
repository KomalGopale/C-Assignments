/*to check whether number is even,prime and divisible by 3 or 7*/
/*Question no.3*/
#include <stdio.h>
int num_check(int num,int *a,int *b,int *c,int arr[]);
int main()
{
    int num,flag1=0,flag2=0,flag3=0;
    int arr[3];
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num == 1)
    {
        printf("\nEntered number is odd");
        printf("\nEntered number is neither prime nor composite");
        printf("\nEntered number is not divisible by 3 or 7\n");
    }
    else
    { 
        num_check(num,&flag1,&flag2,&flag3,arr);
        if(arr[0] == 1)
        {
           printf("Entered number is even");
        }
        else
        {
           printf("\nEntered number is odd");
        }
     
        if(arr[1] == 1)
        {
           printf("\nEntered number is prime");
        }
        else
        {
           printf("\nEntered number is not prime");
        }

        if(arr[2] == 1)
        {
           printf("\nEntered number is divisible by 3 or 7");
        }
        else
        {
           printf("\nEntered number is not divisible by 3 or 7");
        }
    }
   return 0;
}
int num_check(int num,int *a,int *b,int *c,int arr[])
{
   int i,count = 0;
   if(num%2 == 0)
   {
      *a = 1;
      arr[0] = *a;
   }

   if(num>1)
   {
       for(i = 1;i <= num;i++)
       {
           if(num%i == 0)
           {
               count++;
           }
       }
       if(count==2)
       {
           *b = 1;
           arr[1] = *b;
       }
   }

   if(num%3==0 || num%7==0)
   {
       *c=1;
       arr[2] = *c;
   }
}