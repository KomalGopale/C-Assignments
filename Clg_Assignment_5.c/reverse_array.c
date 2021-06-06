/*program to reverse a array using function*/
/*Question no.1*/
#include <stdio.h>
void inputnums(int size);
int main()
{  
   int size;
   printf("Enter size of a array: ");
   scanf("%d",&size);
   inputnums(size);
   return 0;
}
void inputnums(int size)
{
    int nums[size];
    int i,number;
    printf("Enter elements of a array: ");
    for(i = 0; i<= size-1; i++)
    {
        scanf("%d",&number);
        nums[i] = number;
    }
    printf("Reverse of array is: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d ",nums[i]);
    }
}